/*
An indicator to show information that is in messaging applications
that the user is using.

Copyright 2009 Canonical Ltd.

Authors:
    Ted Gould <ted@canonical.com>

This program is free software: you can redistribute it and/or modify it 
under the terms of the GNU General Public License version 3, as published 
by the Free Software Foundation.

This program is distributed in the hope that it will be useful, but 
WITHOUT ANY WARRANTY; without even the implied warranties of 
MERCHANTABILITY, SATISFACTORY QUALITY, or FITNESS FOR A PARTICULAR 
PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along 
with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <glib/gi18n.h>
#include <gio/gdesktopappinfo.h>
#include <libdbusmenu-glib/client.h>
#include <libdbusmenu-glib/menuitem-proxy.h>
#include "app-menu-item.h"
#include "dbus-data.h"
#include "default-applications.h"
#include "seen-db.h"

enum {
	COUNT_CHANGED,
	NAME_CHANGED,
	SHORTCUT_ADDED,
	SHORTCUT_REMOVED,
	LAST_SIGNAL
};

static guint signals[LAST_SIGNAL] = { 0 };

typedef struct _AppMenuItemPrivate AppMenuItemPrivate;

struct _AppMenuItemPrivate
{
	IndicateListener *            listener;
	IndicateListenerServer *      server;
	
	gchar * type;
	GAppInfo * appinfo;
	GKeyFile * keyfile;
	gchar * desktop;
	guint unreadcount;

	DbusmenuClient * client;
	DbusmenuMenuitem * root;
	GList * shortcuts;
};

#define APP_MENU_ITEM_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), APP_MENU_ITEM_TYPE, AppMenuItemPrivate))

/* Prototypes */
static void app_menu_item_class_init (AppMenuItemClass *klass);
static void app_menu_item_init       (AppMenuItem *self);
static void app_menu_item_dispose    (GObject *object);
static void app_menu_item_finalize   (GObject *object);
static void activate_cb (AppMenuItem * self, guint timestamp, gpointer data);
static void count_changed (IndicateListener * listener, IndicateListenerServer * server, guint count, gpointer data);
static void count_cb (IndicateListener * listener, IndicateListenerServer * server, guint value, gpointer data);
static void menu_cb (IndicateListener * listener, IndicateListenerServer * server, const gchar * menupath, gpointer data);
static void desktop_cb (IndicateListener * listener, IndicateListenerServer * server, const gchar * value, gpointer data);
static void update_label (AppMenuItem * self);

/* GObject Boilerplate */
G_DEFINE_TYPE (AppMenuItem, app_menu_item, DBUSMENU_TYPE_MENUITEM);

static void
app_menu_item_class_init (AppMenuItemClass *klass)
{
	GObjectClass *object_class = G_OBJECT_CLASS (klass);

	g_type_class_add_private (klass, sizeof (AppMenuItemPrivate));

	object_class->dispose = app_menu_item_dispose;
	object_class->finalize = app_menu_item_finalize;

	signals[COUNT_CHANGED] = g_signal_new(APP_MENU_ITEM_SIGNAL_COUNT_CHANGED,
	                                      G_TYPE_FROM_CLASS(klass),
	                                      G_SIGNAL_RUN_LAST,
	                                      G_STRUCT_OFFSET (AppMenuItemClass, count_changed),
	                                      NULL, NULL,
	                                      g_cclosure_marshal_VOID__UINT,
	                                      G_TYPE_NONE, 1, G_TYPE_UINT);
	signals[NAME_CHANGED] =  g_signal_new(APP_MENU_ITEM_SIGNAL_NAME_CHANGED,
	                                      G_TYPE_FROM_CLASS(klass),
	                                      G_SIGNAL_RUN_LAST,
	                                      G_STRUCT_OFFSET (AppMenuItemClass, name_changed),
	                                      NULL, NULL,
	                                      g_cclosure_marshal_VOID__STRING,
	                                      G_TYPE_NONE, 1, G_TYPE_STRING);
	signals[SHORTCUT_ADDED] =  g_signal_new(APP_MENU_ITEM_SIGNAL_SHORTCUT_ADDED,
	                                      G_TYPE_FROM_CLASS(klass),
	                                      G_SIGNAL_RUN_LAST,
	                                      G_STRUCT_OFFSET (AppMenuItemClass, shortcut_added),
	                                      NULL, NULL,
	                                      g_cclosure_marshal_VOID__OBJECT,
	                                      G_TYPE_NONE, 1, G_TYPE_OBJECT);
	signals[SHORTCUT_REMOVED] =  g_signal_new(APP_MENU_ITEM_SIGNAL_SHORTCUT_REMOVED,
	                                      G_TYPE_FROM_CLASS(klass),
	                                      G_SIGNAL_RUN_LAST,
	                                      G_STRUCT_OFFSET (AppMenuItemClass, shortcut_removed),
	                                      NULL, NULL,
	                                      g_cclosure_marshal_VOID__OBJECT,
	                                      G_TYPE_NONE, 1, G_TYPE_OBJECT);

	return;
}

static void
app_menu_item_init (AppMenuItem *self)
{
	g_debug("Building new App Menu Item");
	AppMenuItemPrivate * priv = APP_MENU_ITEM_GET_PRIVATE(self);

	priv->listener = NULL;
	priv->server = NULL;
	priv->type = NULL;
	priv->appinfo = NULL;
	priv->keyfile = NULL;
	priv->desktop = NULL;
	priv->unreadcount = 0;

	priv->client = NULL;
	priv->root = NULL;
	priv->shortcuts = NULL;

	dbusmenu_menuitem_property_set_bool(DBUSMENU_MENUITEM(self), DBUSMENU_MENUITEM_PROP_VISIBLE, FALSE);

	return;
}

/* A wrapper to make the prototypes work for GFunc */
static void
func_unref (gpointer data, gpointer user_data)
{
	g_signal_emit(user_data, signals[SHORTCUT_REMOVED], 0, data, TRUE);
	g_object_unref(G_OBJECT(data));
	return;
}

/* Disconnect the count_changed signal and unref the listener */
static void
app_menu_item_dispose (GObject *object)
{
	AppMenuItem * self = APP_MENU_ITEM(object);
	AppMenuItemPrivate * priv = APP_MENU_ITEM_GET_PRIVATE(self);

	if (priv->listener != NULL) {
		g_signal_handlers_disconnect_by_func(G_OBJECT(priv->listener), count_changed, self);
		g_object_unref(priv->listener);
		priv->listener = NULL;
	}

	if (priv->shortcuts != NULL) {
		g_list_foreach(priv->shortcuts, func_unref, object);
		g_list_free(priv->shortcuts);
		priv->shortcuts = NULL;
	}

	if (priv->root != NULL) {
		g_object_unref(priv->root);
		priv->root = NULL;
	}

	if (priv->client != NULL) {
		g_object_unref(priv->client);
		priv->client = NULL;
	}

	if (priv->appinfo != NULL) {
		g_object_unref(priv->appinfo);
		priv->appinfo = NULL;
	}

	if (priv->keyfile != NULL) {
		g_object_unref(priv->keyfile);
		priv->keyfile = NULL;
	}

	G_OBJECT_CLASS (app_menu_item_parent_class)->dispose (object);
}

/* Free the memory used by our type, desktop file and application
   info structures. */
static void
app_menu_item_finalize (GObject *object)
{
	AppMenuItem * self = APP_MENU_ITEM(object);
	AppMenuItemPrivate * priv = APP_MENU_ITEM_GET_PRIVATE(self);

	if (priv->type != NULL) {
		g_free(priv->type);
		priv->type = NULL;
	}

	if (priv->desktop != NULL) {
		g_free(priv->desktop);
		priv->desktop = NULL;
	}

	G_OBJECT_CLASS (app_menu_item_parent_class)->finalize (object);

	return;
}

AppMenuItem *
app_menu_item_new (IndicateListener * listener, IndicateListenerServer * server)
{
	AppMenuItem * self = g_object_new(APP_MENU_ITEM_TYPE, NULL);

	AppMenuItemPrivate * priv = APP_MENU_ITEM_GET_PRIVATE(self);

	/* Copy the listener so we can use it later */
	priv->listener = listener;
	g_object_ref(G_OBJECT(listener));

	/* Can not ref as not real GObject */
	priv->server = server;

	dbusmenu_menuitem_property_set(DBUSMENU_MENUITEM(self), DBUSMENU_MENUITEM_PROP_TYPE, APPLICATION_MENUITEM_TYPE);

	/* Set up listener signals */
	g_signal_connect(G_OBJECT(listener), INDICATE_LISTENER_SIGNAL_SERVER_COUNT_CHANGED, G_CALLBACK(count_changed), self);

	/* Get the values we care about from the server */
	indicate_listener_server_get_desktop(listener, server, desktop_cb, self);
	indicate_listener_server_get_count(listener, server, count_cb, self);
	indicate_listener_server_get_menu(listener, server, menu_cb, self);

	g_signal_connect(G_OBJECT(self), DBUSMENU_MENUITEM_SIGNAL_ITEM_ACTIVATED, G_CALLBACK(activate_cb), NULL);

	indicate_listener_server_show_interest(listener, server, INDICATE_INTEREST_SERVER_DISPLAY);
	indicate_listener_server_show_interest(listener, server, INDICATE_INTEREST_SERVER_SIGNAL);
	indicate_listener_server_show_interest(listener, server, INDICATE_INTEREST_INDICATOR_COUNT);
	indicate_listener_server_show_interest(listener, server, INDICATE_INTEREST_INDICATOR_DISPLAY);
	indicate_listener_server_show_interest(listener, server, INDICATE_INTEREST_INDICATOR_SIGNAL);
	indicate_listener_set_server_max_indicators(listener, server, MAX_NUMBER_OF_INDICATORS);

	return self;
}

static void
update_label (AppMenuItem * self)
{
	AppMenuItemPrivate * priv = APP_MENU_ITEM_GET_PRIVATE(self);
	const gchar * name = get_default_name(priv->desktop);

	if (name == NULL) {
		name = app_menu_item_get_name(self);
	}

	if (priv->unreadcount > 0) {
		/* TRANSLATORS: This is the name of the program and the number of indicators.  So it
		                would read something like "Mail Client (5)" */
		gchar * label = g_strdup_printf(_("%s (%d)"), _(name), priv->unreadcount);
		dbusmenu_menuitem_property_set(DBUSMENU_MENUITEM(self), APPLICATION_MENUITEM_PROP_NAME, label);
		g_free(label);
	} else {
		dbusmenu_menuitem_property_set(DBUSMENU_MENUITEM(self), APPLICATION_MENUITEM_PROP_NAME, _(name));
	}

	return;
}

/* Callback to the signal that the server count
   has changed to a new value.  This checks to see if
   it's actually changed and if so signals everyone and
   updates the label. */
static void
count_changed (IndicateListener * listener, IndicateListenerServer * server, guint count, gpointer data)
{
	g_return_if_fail(IS_APP_MENU_ITEM(data));
	AppMenuItem * self = APP_MENU_ITEM(data);
	AppMenuItemPrivate * priv = APP_MENU_ITEM_GET_PRIVATE(self);

	if (priv->unreadcount != count) {
		priv->unreadcount = count;
		update_label(self);
		g_signal_emit(G_OBJECT(self), signals[COUNT_CHANGED], 0, priv->unreadcount, TRUE);
	}

	return;
}

/* Callback for getting the count property off
   of the server. */
static void 
count_cb (IndicateListener * listener, IndicateListenerServer * server, guint value, gpointer data)
{
	count_changed(listener, server, value, data);
	return;
}

/* Callback for when we ask the server for the path
   to it's desktop file.  We then turn it into an
   app structure and start sucking data out of it.
   Mostly the name. And the icon. */
static void 
desktop_cb (IndicateListener * listener, IndicateListenerServer * server, const gchar * value, gpointer data)
{
	g_return_if_fail(IS_APP_MENU_ITEM(data));
	AppMenuItem * self = APP_MENU_ITEM(data);
	AppMenuItemPrivate * priv = APP_MENU_ITEM_GET_PRIVATE(self);

	if (priv->appinfo != NULL) {
		g_object_unref(G_OBJECT(priv->appinfo));
		priv->appinfo = NULL;
	}

	if (priv->desktop != NULL) {
		g_free(priv->desktop);
		priv->desktop = NULL;
	}

	if (value == NULL || value[0] == '\0') {
		return;
	}

	seen_db_add(value);

	priv->appinfo = G_APP_INFO(g_desktop_app_info_new_from_filename(value));
	g_return_if_fail(priv->appinfo != NULL);

	priv->keyfile = g_key_file_new();
	g_key_file_load_from_file(priv->keyfile, value, G_KEY_FILE_NONE, NULL);

	priv->desktop = g_strdup(value);

	dbusmenu_menuitem_property_set_bool(DBUSMENU_MENUITEM(self), DBUSMENU_MENUITEM_PROP_VISIBLE, TRUE);
	dbusmenu_menuitem_property_set_bool(DBUSMENU_MENUITEM(self), APPLICATION_MENUITEM_PROP_RUNNING, TRUE);

	update_label(self);

	const gchar * def_icon = get_default_icon(priv->desktop);
	if (def_icon == NULL) {
		gchar * iconstr = NULL;

		/* Check for the over ride key and see if we should be using that
		   icon.  If we can't get it, then go back to the app info */
		if (g_key_file_has_key(priv->keyfile, G_KEY_FILE_DESKTOP_GROUP, ICON_KEY, NULL) && iconstr == NULL) {
			GError * error = NULL;

			iconstr = g_key_file_get_string(priv->keyfile, G_KEY_FILE_DESKTOP_GROUP, ICON_KEY, &error);

			if (error != NULL) {
				/* Can't figure out why this would happen, but sure, let's print something */
				g_warning("Error getting '" ICON_KEY "' from desktop file: %s", error->message);
				g_error_free(error);
			}
		}

		/* For some reason that didn't work, let's try the app info */
		if (iconstr == NULL) {
			GIcon * icon = g_app_info_get_icon(priv->appinfo);
			iconstr = g_icon_to_string(icon);
		}

		dbusmenu_menuitem_property_set(DBUSMENU_MENUITEM(self), APPLICATION_MENUITEM_PROP_ICON, iconstr);
		g_free(iconstr);
	} else {
		dbusmenu_menuitem_property_set(DBUSMENU_MENUITEM(self), APPLICATION_MENUITEM_PROP_ICON, def_icon);
	}

	g_signal_emit(G_OBJECT(self), signals[NAME_CHANGED], 0, app_menu_item_get_name(self), TRUE);

	return;
}

/* Relay this signal into causing a rebuild of the shortcuts
   from those above us. */
static void
child_added_cb (DbusmenuMenuitem * root, DbusmenuMenuitem * child, guint position, gpointer data)
{
	g_return_if_fail(IS_APP_MENU_ITEM(data));
	AppMenuItem * self = APP_MENU_ITEM(data);
	AppMenuItemPrivate * priv = APP_MENU_ITEM_GET_PRIVATE(self);
	DbusmenuMenuitemProxy * mip = dbusmenu_menuitem_proxy_new(child);

	priv->shortcuts = g_list_insert(priv->shortcuts, mip, position);

	g_signal_emit(G_OBJECT(data), signals[SHORTCUT_ADDED], 0, mip, TRUE);
	return;
}

/* Relay this signal into causing a rebuild of the shortcuts
   from those above us. */
static void
child_removed_cb (DbusmenuMenuitem * root, DbusmenuMenuitem * child, gpointer data)
{
	g_return_if_fail(IS_APP_MENU_ITEM(data));
	AppMenuItem * self = APP_MENU_ITEM(data);
	AppMenuItemPrivate * priv = APP_MENU_ITEM_GET_PRIVATE(self);

	GList * pitems = priv->shortcuts;
	while (pitems != NULL) {
		DbusmenuMenuitemProxy * mip = DBUSMENU_MENUITEM_PROXY(pitems->data);

		if (dbusmenu_menuitem_proxy_get_wrapped(mip) == child) {
			break;
		}

		pitems = g_list_next(pitems);
	}

	if (pitems != NULL) {
		DbusmenuMenuitemProxy * mip = DBUSMENU_MENUITEM_PROXY(pitems->data);
		priv->shortcuts = g_list_remove(priv->shortcuts, mip);

		g_signal_emit(G_OBJECT(data), signals[SHORTCUT_REMOVED], 0, mip, TRUE);
		g_object_unref(mip);
	}

	return;
}

/* Relay this signal into causing a rebuild of the shortcuts
   from those above us. */
static void 
child_moved_cb (DbusmenuMenuitem * root, DbusmenuMenuitem * child, guint newpos, guint oldpos, gpointer data)
{
	g_return_if_fail(IS_APP_MENU_ITEM(data));
	AppMenuItem * self = APP_MENU_ITEM(data);
	AppMenuItemPrivate * priv = APP_MENU_ITEM_GET_PRIVATE(self);

	DbusmenuMenuitemProxy * mip = DBUSMENU_MENUITEM_PROXY(g_list_nth_data(priv->shortcuts, oldpos));

	if (mip != NULL) {
		if (dbusmenu_menuitem_proxy_get_wrapped(mip) != child) {
			mip = NULL;
		}
	}

	if (mip != NULL) {
		priv->shortcuts = g_list_remove(priv->shortcuts, mip);
		priv->shortcuts = g_list_insert(priv->shortcuts, mip, newpos);
		g_signal_emit(G_OBJECT(data), signals[SHORTCUT_ADDED], 0, NULL, TRUE);
	}

	return;
}

/* We've got a new root.  We need to proxy it and handle it's children
   if that's a relevant thing to do. */
static void
root_changed (DbusmenuClient * client, DbusmenuMenuitem * newroot, gpointer data)
{
	g_debug("Root Changed");
	AppMenuItem * self = APP_MENU_ITEM(data);
	AppMenuItemPrivate * priv = APP_MENU_ITEM_GET_PRIVATE(self);

	if (priv->root != NULL) {
		if (dbusmenu_menuitem_get_children(DBUSMENU_MENUITEM(priv->root)) != NULL) {
			g_list_foreach(priv->shortcuts, func_unref, data);
			g_list_free(priv->shortcuts);
			priv->shortcuts = NULL;
		}
		g_object_unref(priv->root);
		priv->root = NULL;
	}

	/* We need to proxy the new root across to the old
	   world of indicator land. */
	priv->root = newroot;

	if (priv->root != NULL) {
		g_object_ref(priv->root);
		g_signal_connect(G_OBJECT(priv->root), DBUSMENU_MENUITEM_SIGNAL_CHILD_ADDED,   G_CALLBACK(child_added_cb),   self);
		g_signal_connect(G_OBJECT(priv->root), DBUSMENU_MENUITEM_SIGNAL_CHILD_REMOVED, G_CALLBACK(child_removed_cb), self);
		g_signal_connect(G_OBJECT(priv->root), DBUSMENU_MENUITEM_SIGNAL_CHILD_MOVED,   G_CALLBACK(child_moved_cb),   self);

		/* See if we have any menuitems to worry about,
		   otherwise we'll just move along. */
		GList * children = dbusmenu_menuitem_get_children(DBUSMENU_MENUITEM(priv->root));
		if (children != NULL) {
			g_debug("\tProcessing %d children", g_list_length(children));
			while (children != NULL) {
				DbusmenuMenuitemProxy * mip = dbusmenu_menuitem_proxy_new(DBUSMENU_MENUITEM(children->data));
				priv->shortcuts = g_list_append(priv->shortcuts, mip);
				g_signal_emit(G_OBJECT(self), signals[SHORTCUT_ADDED], 0, mip, TRUE);
				children = g_list_next(children);
			}
		}
	}

	return;
}

/* Gets the path to menuitems if there are some.  Now we need to
   make them special. */
static void
menu_cb (IndicateListener * listener, IndicateListenerServer * server, const gchar * menupath, gpointer data)
{
	g_debug("Got Menu: %s", menupath);
	g_return_if_fail(IS_APP_MENU_ITEM(data));
	AppMenuItem * self = APP_MENU_ITEM(data);
	AppMenuItemPrivate * priv = APP_MENU_ITEM_GET_PRIVATE(self);

	priv->client = dbusmenu_client_new(indicate_listener_server_get_dbusname(server), menupath);
	g_signal_connect(G_OBJECT(priv->client), DBUSMENU_CLIENT_SIGNAL_ROOT_CHANGED, G_CALLBACK(root_changed), self);

	DbusmenuMenuitem * root = dbusmenu_client_get_root(priv->client);
	if (root != NULL) {
		root_changed(priv->client, root, self);
	}

	return;
}

static void
activate_cb (AppMenuItem * self, guint timestamp, gpointer data)
{
	AppMenuItemPrivate * priv = APP_MENU_ITEM_GET_PRIVATE(self);

	indicate_listener_display(priv->listener, priv->server, NULL, timestamp);

	return;
}

guint
app_menu_item_get_count (AppMenuItem * appitem)
{
	g_return_val_if_fail(IS_APP_MENU_ITEM(appitem), 0);
	AppMenuItemPrivate * priv = APP_MENU_ITEM_GET_PRIVATE(appitem);

	return priv->unreadcount;
}

IndicateListenerServer *
app_menu_item_get_server (AppMenuItem * appitem) {
	g_return_val_if_fail(IS_APP_MENU_ITEM(appitem), NULL);
	AppMenuItemPrivate * priv = APP_MENU_ITEM_GET_PRIVATE(appitem);

	return priv->server;
}

const gchar *
app_menu_item_get_name (AppMenuItem * appitem)
{
	g_return_val_if_fail(IS_APP_MENU_ITEM(appitem), NULL);
	AppMenuItemPrivate * priv = APP_MENU_ITEM_GET_PRIVATE(appitem);

	if (priv->appinfo == NULL) {
		return INDICATE_LISTENER_SERVER_DBUS_NAME(priv->server);
	} else {
		return g_app_info_get_name(priv->appinfo);
	}
}

const gchar *
app_menu_item_get_desktop (AppMenuItem * appitem)
{
	g_return_val_if_fail(IS_APP_MENU_ITEM(appitem), NULL);
	AppMenuItemPrivate * priv = APP_MENU_ITEM_GET_PRIVATE(appitem);
	return priv->desktop;
}

/* Get the dynamic items added onto the end of
   and app entry. */
GList *
app_menu_item_get_items (AppMenuItem * appitem)
{
	g_return_val_if_fail(IS_APP_MENU_ITEM(appitem), NULL);
	AppMenuItemPrivate * priv = APP_MENU_ITEM_GET_PRIVATE(appitem);
	return priv->shortcuts;
}
