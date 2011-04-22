/* Generated by dbus-binding-tool; do not edit! */

#include <glib.h>
#include <dbus/dbus-glib.h>

G_BEGIN_DECLS

#ifndef _DBUS_GLIB_ASYNC_DATA_FREE
#define _DBUS_GLIB_ASYNC_DATA_FREE
static
#ifdef G_HAVE_INLINE
inline
#endif
void
_dbus_glib_async_data_free (gpointer stuff)
{
	g_slice_free (DBusGAsyncData, stuff);
}
#endif

#ifndef DBUS_GLIB_CLIENT_WRAPPERS_org_gnome_DisplayManager_LocalDisplayFactory
#define DBUS_GLIB_CLIENT_WRAPPERS_org_gnome_DisplayManager_LocalDisplayFactory

static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_gnome_DisplayManager_LocalDisplayFactory_create_product_display (DBusGProxy *proxy, const char* IN_parent_display_id, const char * IN_relay_address, char** OUT_id, GError **error)

{
  return dbus_g_proxy_call (proxy, "CreateProductDisplay", error, DBUS_TYPE_G_OBJECT_PATH, IN_parent_display_id, G_TYPE_STRING, IN_relay_address, G_TYPE_INVALID, DBUS_TYPE_G_OBJECT_PATH, OUT_id, G_TYPE_INVALID);
}

typedef void (*org_gnome_DisplayManager_LocalDisplayFactory_create_product_display_reply) (DBusGProxy *proxy, char *OUT_id, GError *error, gpointer userdata);

static void
org_gnome_DisplayManager_LocalDisplayFactory_create_product_display_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  char* OUT_id;
  dbus_g_proxy_end_call (proxy, call, &error, DBUS_TYPE_G_OBJECT_PATH, &OUT_id, G_TYPE_INVALID);
  (*(org_gnome_DisplayManager_LocalDisplayFactory_create_product_display_reply)data->cb) (proxy, OUT_id, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_gnome_DisplayManager_LocalDisplayFactory_create_product_display_async (DBusGProxy *proxy, const char* IN_parent_display_id, const char * IN_relay_address, org_gnome_DisplayManager_LocalDisplayFactory_create_product_display_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "CreateProductDisplay", org_gnome_DisplayManager_LocalDisplayFactory_create_product_display_async_callback, stuff, _dbus_glib_async_data_free, DBUS_TYPE_G_OBJECT_PATH, IN_parent_display_id, G_TYPE_STRING, IN_relay_address, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_gnome_DisplayManager_LocalDisplayFactory_create_transient_display (DBusGProxy *proxy, char** OUT_id, GError **error)

{
  return dbus_g_proxy_call (proxy, "CreateTransientDisplay", error, G_TYPE_INVALID, DBUS_TYPE_G_OBJECT_PATH, OUT_id, G_TYPE_INVALID);
}

typedef void (*org_gnome_DisplayManager_LocalDisplayFactory_create_transient_display_reply) (DBusGProxy *proxy, char *OUT_id, GError *error, gpointer userdata);

static void
org_gnome_DisplayManager_LocalDisplayFactory_create_transient_display_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  char* OUT_id;
  dbus_g_proxy_end_call (proxy, call, &error, DBUS_TYPE_G_OBJECT_PATH, &OUT_id, G_TYPE_INVALID);
  (*(org_gnome_DisplayManager_LocalDisplayFactory_create_transient_display_reply)data->cb) (proxy, OUT_id, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_gnome_DisplayManager_LocalDisplayFactory_create_transient_display_async (DBusGProxy *proxy, org_gnome_DisplayManager_LocalDisplayFactory_create_transient_display_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "CreateTransientDisplay", org_gnome_DisplayManager_LocalDisplayFactory_create_transient_display_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_gnome_DisplayManager_LocalDisplayFactory_start_guest_session (DBusGProxy *proxy, char** OUT_id, GError **error)

{
  return dbus_g_proxy_call (proxy, "StartGuestSession", error, G_TYPE_INVALID, DBUS_TYPE_G_OBJECT_PATH, OUT_id, G_TYPE_INVALID);
}

typedef void (*org_gnome_DisplayManager_LocalDisplayFactory_start_guest_session_reply) (DBusGProxy *proxy, char *OUT_id, GError *error, gpointer userdata);

static void
org_gnome_DisplayManager_LocalDisplayFactory_start_guest_session_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  char* OUT_id;
  dbus_g_proxy_end_call (proxy, call, &error, DBUS_TYPE_G_OBJECT_PATH, &OUT_id, G_TYPE_INVALID);
  (*(org_gnome_DisplayManager_LocalDisplayFactory_start_guest_session_reply)data->cb) (proxy, OUT_id, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_gnome_DisplayManager_LocalDisplayFactory_start_guest_session_async (DBusGProxy *proxy, org_gnome_DisplayManager_LocalDisplayFactory_start_guest_session_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "StartGuestSession", org_gnome_DisplayManager_LocalDisplayFactory_start_guest_session_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_gnome_DisplayManager_LocalDisplayFactory_switch_to_user (DBusGProxy *proxy, const char * IN_username, char** OUT_id, GError **error)

{
  return dbus_g_proxy_call (proxy, "SwitchToUser", error, G_TYPE_STRING, IN_username, G_TYPE_INVALID, DBUS_TYPE_G_OBJECT_PATH, OUT_id, G_TYPE_INVALID);
}

typedef void (*org_gnome_DisplayManager_LocalDisplayFactory_switch_to_user_reply) (DBusGProxy *proxy, char *OUT_id, GError *error, gpointer userdata);

static void
org_gnome_DisplayManager_LocalDisplayFactory_switch_to_user_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  char* OUT_id;
  dbus_g_proxy_end_call (proxy, call, &error, DBUS_TYPE_G_OBJECT_PATH, &OUT_id, G_TYPE_INVALID);
  (*(org_gnome_DisplayManager_LocalDisplayFactory_switch_to_user_reply)data->cb) (proxy, OUT_id, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_gnome_DisplayManager_LocalDisplayFactory_switch_to_user_async (DBusGProxy *proxy, const char * IN_username, org_gnome_DisplayManager_LocalDisplayFactory_switch_to_user_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "SwitchToUser", org_gnome_DisplayManager_LocalDisplayFactory_switch_to_user_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_STRING, IN_username, G_TYPE_INVALID);
}
#endif /* defined DBUS_GLIB_CLIENT_WRAPPERS_org_gnome_DisplayManager_LocalDisplayFactory */

G_END_DECLS