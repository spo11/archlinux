/*
A small wrapper utility to load indicators and put them as menu items
into the gnome-panel using it's applet interface.

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


#ifndef __DBUS_SHARED_NAMES_H__
#define __DBUS_SHARED_NAMES_H__ 1

#define INDICATOR_STATUS_DBUS_NAME  "com.canonical.indicator.status"
#define INDICATOR_STATUS_DBUS_OBJECT "/com/canonical/indicator/status/menu"
#define INDICATOR_STATUS_SERVICE_DBUS_OBJECT "/com/canonical/indicator/status/service"
#define INDICATOR_STATUS_SERVICE_DBUS_INTERFACE "com.canonical.indicator.status.service"

#define INDICATOR_USERS_DBUS_NAME  "com.canonical.indicator.users"
#define INDICATOR_USERS_DBUS_OBJECT "/com/canonical/indicator/users/menu"
#define INDICATOR_USERS_SERVICE_DBUS_OBJECT "/org/gnome/DisplayManager/UserManager"
#define INDICATOR_USERS_SERVICE_DBUS_INTERFACE "org.gnome.DisplayManager.UserManager"

#define INDICATOR_SESSION_DBUS_NAME  "com.canonical.indicator.session"
#define INDICATOR_SESSION_DBUS_OBJECT "/com/canonical/indicator/session/menu"
#define INDICATOR_SESSION_DBUS_VERSION  0

#define INDICATOR_SESSION_SERVICE_DBUS_OBJECT "/com/canonical/indicator/session/service"
#define INDICATOR_SESSION_SERVICE_DBUS_IFACE  "com.canonical.indicator.session.service"

#define USER_ITEM_TYPE            "x-canonical-user-item"
#define USER_ITEM_PROP_NAME       "user-item-name"
#define USER_ITEM_PROP_LOGGED_IN  "user-item-logged-in"
#define USER_ITEM_PROP_ICON       "user-item-icon-path"
#define USER_ITEM_ICON_DEFAULT    "default-icon"

#define RESTART_ITEM_TYPE         "x-canonical-restart-item"
#define RESTART_ITEM_LABEL        "restart-label"
#define RESTART_ITEM_ICON         "restart-icon"

#define ICON_DEFAULT              "system-shutdown-panel"
#define ICON_RESTART              "system-shutdown-panel-restart"

#endif /* __DBUS_SHARED_NAMES_H__ */
