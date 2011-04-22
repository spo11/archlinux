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

#ifndef DBUS_GLIB_CLIENT_WRAPPERS_org_freedesktop_UPower
#define DBUS_GLIB_CLIENT_WRAPPERS_org_freedesktop_UPower

static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_UPower_enumerate_devices (DBusGProxy *proxy, GPtrArray** OUT_devices, GError **error)

{
  return dbus_g_proxy_call (proxy, "EnumerateDevices", error, G_TYPE_INVALID, dbus_g_type_get_collection ("GPtrArray", DBUS_TYPE_G_OBJECT_PATH), OUT_devices, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_UPower_enumerate_devices_reply) (DBusGProxy *proxy, GPtrArray *OUT_devices, GError *error, gpointer userdata);

static void
org_freedesktop_UPower_enumerate_devices_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  GPtrArray* OUT_devices;
  dbus_g_proxy_end_call (proxy, call, &error, dbus_g_type_get_collection ("GPtrArray", DBUS_TYPE_G_OBJECT_PATH), &OUT_devices, G_TYPE_INVALID);
  (*(org_freedesktop_UPower_enumerate_devices_reply)data->cb) (proxy, OUT_devices, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_UPower_enumerate_devices_async (DBusGProxy *proxy, org_freedesktop_UPower_enumerate_devices_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "EnumerateDevices", org_freedesktop_UPower_enumerate_devices_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_UPower_about_to_sleep (DBusGProxy *proxy, GError **error)

{
  return dbus_g_proxy_call (proxy, "AboutToSleep", error, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_UPower_about_to_sleep_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
org_freedesktop_UPower_about_to_sleep_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(org_freedesktop_UPower_about_to_sleep_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_UPower_about_to_sleep_async (DBusGProxy *proxy, org_freedesktop_UPower_about_to_sleep_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "AboutToSleep", org_freedesktop_UPower_about_to_sleep_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_UPower_suspend (DBusGProxy *proxy, GError **error)

{
  return dbus_g_proxy_call (proxy, "Suspend", error, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_UPower_suspend_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
org_freedesktop_UPower_suspend_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(org_freedesktop_UPower_suspend_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_UPower_suspend_async (DBusGProxy *proxy, org_freedesktop_UPower_suspend_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "Suspend", org_freedesktop_UPower_suspend_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_UPower_suspend_allowed (DBusGProxy *proxy, gboolean* OUT_allowed, GError **error)

{
  return dbus_g_proxy_call (proxy, "SuspendAllowed", error, G_TYPE_INVALID, G_TYPE_BOOLEAN, OUT_allowed, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_UPower_suspend_allowed_reply) (DBusGProxy *proxy, gboolean OUT_allowed, GError *error, gpointer userdata);

static void
org_freedesktop_UPower_suspend_allowed_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  gboolean OUT_allowed;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_BOOLEAN, &OUT_allowed, G_TYPE_INVALID);
  (*(org_freedesktop_UPower_suspend_allowed_reply)data->cb) (proxy, OUT_allowed, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_UPower_suspend_allowed_async (DBusGProxy *proxy, org_freedesktop_UPower_suspend_allowed_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "SuspendAllowed", org_freedesktop_UPower_suspend_allowed_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_UPower_hibernate (DBusGProxy *proxy, GError **error)

{
  return dbus_g_proxy_call (proxy, "Hibernate", error, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_UPower_hibernate_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
org_freedesktop_UPower_hibernate_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(org_freedesktop_UPower_hibernate_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_UPower_hibernate_async (DBusGProxy *proxy, org_freedesktop_UPower_hibernate_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "Hibernate", org_freedesktop_UPower_hibernate_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_UPower_hibernate_allowed (DBusGProxy *proxy, gboolean* OUT_allowed, GError **error)

{
  return dbus_g_proxy_call (proxy, "HibernateAllowed", error, G_TYPE_INVALID, G_TYPE_BOOLEAN, OUT_allowed, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_UPower_hibernate_allowed_reply) (DBusGProxy *proxy, gboolean OUT_allowed, GError *error, gpointer userdata);

static void
org_freedesktop_UPower_hibernate_allowed_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  gboolean OUT_allowed;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_BOOLEAN, &OUT_allowed, G_TYPE_INVALID);
  (*(org_freedesktop_UPower_hibernate_allowed_reply)data->cb) (proxy, OUT_allowed, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_UPower_hibernate_allowed_async (DBusGProxy *proxy, org_freedesktop_UPower_hibernate_allowed_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "HibernateAllowed", org_freedesktop_UPower_hibernate_allowed_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_INVALID);
}
#endif /* defined DBUS_GLIB_CLIENT_WRAPPERS_org_freedesktop_UPower */

G_END_DECLS