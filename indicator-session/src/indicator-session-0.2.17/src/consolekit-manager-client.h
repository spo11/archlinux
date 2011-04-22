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

#ifndef DBUS_GLIB_CLIENT_WRAPPERS_org_freedesktop_ConsoleKit_Manager
#define DBUS_GLIB_CLIENT_WRAPPERS_org_freedesktop_ConsoleKit_Manager

static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_ConsoleKit_Manager_restart (DBusGProxy *proxy, GError **error)

{
  return dbus_g_proxy_call (proxy, "Restart", error, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_ConsoleKit_Manager_restart_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
org_freedesktop_ConsoleKit_Manager_restart_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(org_freedesktop_ConsoleKit_Manager_restart_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_ConsoleKit_Manager_restart_async (DBusGProxy *proxy, org_freedesktop_ConsoleKit_Manager_restart_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "Restart", org_freedesktop_ConsoleKit_Manager_restart_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_ConsoleKit_Manager_can_restart (DBusGProxy *proxy, gboolean* OUT_can_restart, GError **error)

{
  return dbus_g_proxy_call (proxy, "CanRestart", error, G_TYPE_INVALID, G_TYPE_BOOLEAN, OUT_can_restart, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_ConsoleKit_Manager_can_restart_reply) (DBusGProxy *proxy, gboolean OUT_can_restart, GError *error, gpointer userdata);

static void
org_freedesktop_ConsoleKit_Manager_can_restart_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  gboolean OUT_can_restart;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_BOOLEAN, &OUT_can_restart, G_TYPE_INVALID);
  (*(org_freedesktop_ConsoleKit_Manager_can_restart_reply)data->cb) (proxy, OUT_can_restart, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_ConsoleKit_Manager_can_restart_async (DBusGProxy *proxy, org_freedesktop_ConsoleKit_Manager_can_restart_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "CanRestart", org_freedesktop_ConsoleKit_Manager_can_restart_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_ConsoleKit_Manager_stop (DBusGProxy *proxy, GError **error)

{
  return dbus_g_proxy_call (proxy, "Stop", error, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_ConsoleKit_Manager_stop_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
org_freedesktop_ConsoleKit_Manager_stop_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(org_freedesktop_ConsoleKit_Manager_stop_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_ConsoleKit_Manager_stop_async (DBusGProxy *proxy, org_freedesktop_ConsoleKit_Manager_stop_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "Stop", org_freedesktop_ConsoleKit_Manager_stop_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_ConsoleKit_Manager_can_stop (DBusGProxy *proxy, gboolean* OUT_can_stop, GError **error)

{
  return dbus_g_proxy_call (proxy, "CanStop", error, G_TYPE_INVALID, G_TYPE_BOOLEAN, OUT_can_stop, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_ConsoleKit_Manager_can_stop_reply) (DBusGProxy *proxy, gboolean OUT_can_stop, GError *error, gpointer userdata);

static void
org_freedesktop_ConsoleKit_Manager_can_stop_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  gboolean OUT_can_stop;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_BOOLEAN, &OUT_can_stop, G_TYPE_INVALID);
  (*(org_freedesktop_ConsoleKit_Manager_can_stop_reply)data->cb) (proxy, OUT_can_stop, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_ConsoleKit_Manager_can_stop_async (DBusGProxy *proxy, org_freedesktop_ConsoleKit_Manager_can_stop_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "CanStop", org_freedesktop_ConsoleKit_Manager_can_stop_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_ConsoleKit_Manager_open_session (DBusGProxy *proxy, char ** OUT_cookie, GError **error)

{
  return dbus_g_proxy_call (proxy, "OpenSession", error, G_TYPE_INVALID, G_TYPE_STRING, OUT_cookie, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_ConsoleKit_Manager_open_session_reply) (DBusGProxy *proxy, char * OUT_cookie, GError *error, gpointer userdata);

static void
org_freedesktop_ConsoleKit_Manager_open_session_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  char * OUT_cookie;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_STRING, &OUT_cookie, G_TYPE_INVALID);
  (*(org_freedesktop_ConsoleKit_Manager_open_session_reply)data->cb) (proxy, OUT_cookie, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_ConsoleKit_Manager_open_session_async (DBusGProxy *proxy, org_freedesktop_ConsoleKit_Manager_open_session_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "OpenSession", org_freedesktop_ConsoleKit_Manager_open_session_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_ConsoleKit_Manager_open_session_with_parameters (DBusGProxy *proxy, const GPtrArray* IN_parameters, char ** OUT_cookie, GError **error)

{
  return dbus_g_proxy_call (proxy, "OpenSessionWithParameters", error, dbus_g_type_get_collection ("GPtrArray", dbus_g_type_get_struct ("GValueArray", G_TYPE_STRING, G_TYPE_VALUE, G_TYPE_INVALID)), IN_parameters, G_TYPE_INVALID, G_TYPE_STRING, OUT_cookie, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_ConsoleKit_Manager_open_session_with_parameters_reply) (DBusGProxy *proxy, char * OUT_cookie, GError *error, gpointer userdata);

static void
org_freedesktop_ConsoleKit_Manager_open_session_with_parameters_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  char * OUT_cookie;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_STRING, &OUT_cookie, G_TYPE_INVALID);
  (*(org_freedesktop_ConsoleKit_Manager_open_session_with_parameters_reply)data->cb) (proxy, OUT_cookie, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_ConsoleKit_Manager_open_session_with_parameters_async (DBusGProxy *proxy, const GPtrArray* IN_parameters, org_freedesktop_ConsoleKit_Manager_open_session_with_parameters_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "OpenSessionWithParameters", org_freedesktop_ConsoleKit_Manager_open_session_with_parameters_async_callback, stuff, _dbus_glib_async_data_free, dbus_g_type_get_collection ("GPtrArray", dbus_g_type_get_struct ("GValueArray", G_TYPE_STRING, G_TYPE_VALUE, G_TYPE_INVALID)), IN_parameters, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_ConsoleKit_Manager_close_session (DBusGProxy *proxy, const char * IN_cookie, gboolean* OUT_result, GError **error)

{
  return dbus_g_proxy_call (proxy, "CloseSession", error, G_TYPE_STRING, IN_cookie, G_TYPE_INVALID, G_TYPE_BOOLEAN, OUT_result, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_ConsoleKit_Manager_close_session_reply) (DBusGProxy *proxy, gboolean OUT_result, GError *error, gpointer userdata);

static void
org_freedesktop_ConsoleKit_Manager_close_session_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  gboolean OUT_result;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_BOOLEAN, &OUT_result, G_TYPE_INVALID);
  (*(org_freedesktop_ConsoleKit_Manager_close_session_reply)data->cb) (proxy, OUT_result, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_ConsoleKit_Manager_close_session_async (DBusGProxy *proxy, const char * IN_cookie, org_freedesktop_ConsoleKit_Manager_close_session_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "CloseSession", org_freedesktop_ConsoleKit_Manager_close_session_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_STRING, IN_cookie, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_ConsoleKit_Manager_get_seats (DBusGProxy *proxy, GPtrArray** OUT_seats, GError **error)

{
  return dbus_g_proxy_call (proxy, "GetSeats", error, G_TYPE_INVALID, dbus_g_type_get_collection ("GPtrArray", DBUS_TYPE_G_OBJECT_PATH), OUT_seats, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_ConsoleKit_Manager_get_seats_reply) (DBusGProxy *proxy, GPtrArray *OUT_seats, GError *error, gpointer userdata);

static void
org_freedesktop_ConsoleKit_Manager_get_seats_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  GPtrArray* OUT_seats;
  dbus_g_proxy_end_call (proxy, call, &error, dbus_g_type_get_collection ("GPtrArray", DBUS_TYPE_G_OBJECT_PATH), &OUT_seats, G_TYPE_INVALID);
  (*(org_freedesktop_ConsoleKit_Manager_get_seats_reply)data->cb) (proxy, OUT_seats, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_ConsoleKit_Manager_get_seats_async (DBusGProxy *proxy, org_freedesktop_ConsoleKit_Manager_get_seats_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "GetSeats", org_freedesktop_ConsoleKit_Manager_get_seats_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_ConsoleKit_Manager_get_sessions (DBusGProxy *proxy, GPtrArray** OUT_sessions, GError **error)

{
  return dbus_g_proxy_call (proxy, "GetSessions", error, G_TYPE_INVALID, dbus_g_type_get_collection ("GPtrArray", DBUS_TYPE_G_OBJECT_PATH), OUT_sessions, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_ConsoleKit_Manager_get_sessions_reply) (DBusGProxy *proxy, GPtrArray *OUT_sessions, GError *error, gpointer userdata);

static void
org_freedesktop_ConsoleKit_Manager_get_sessions_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  GPtrArray* OUT_sessions;
  dbus_g_proxy_end_call (proxy, call, &error, dbus_g_type_get_collection ("GPtrArray", DBUS_TYPE_G_OBJECT_PATH), &OUT_sessions, G_TYPE_INVALID);
  (*(org_freedesktop_ConsoleKit_Manager_get_sessions_reply)data->cb) (proxy, OUT_sessions, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_ConsoleKit_Manager_get_sessions_async (DBusGProxy *proxy, org_freedesktop_ConsoleKit_Manager_get_sessions_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "GetSessions", org_freedesktop_ConsoleKit_Manager_get_sessions_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_ConsoleKit_Manager_get_session_for_cookie (DBusGProxy *proxy, const char * IN_cookie, char** OUT_ssid, GError **error)

{
  return dbus_g_proxy_call (proxy, "GetSessionForCookie", error, G_TYPE_STRING, IN_cookie, G_TYPE_INVALID, DBUS_TYPE_G_OBJECT_PATH, OUT_ssid, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_ConsoleKit_Manager_get_session_for_cookie_reply) (DBusGProxy *proxy, char *OUT_ssid, GError *error, gpointer userdata);

static void
org_freedesktop_ConsoleKit_Manager_get_session_for_cookie_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  char* OUT_ssid;
  dbus_g_proxy_end_call (proxy, call, &error, DBUS_TYPE_G_OBJECT_PATH, &OUT_ssid, G_TYPE_INVALID);
  (*(org_freedesktop_ConsoleKit_Manager_get_session_for_cookie_reply)data->cb) (proxy, OUT_ssid, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_ConsoleKit_Manager_get_session_for_cookie_async (DBusGProxy *proxy, const char * IN_cookie, org_freedesktop_ConsoleKit_Manager_get_session_for_cookie_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "GetSessionForCookie", org_freedesktop_ConsoleKit_Manager_get_session_for_cookie_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_STRING, IN_cookie, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_ConsoleKit_Manager_get_session_for_unix_process (DBusGProxy *proxy, const guint IN_pid, char** OUT_ssid, GError **error)

{
  return dbus_g_proxy_call (proxy, "GetSessionForUnixProcess", error, G_TYPE_UINT, IN_pid, G_TYPE_INVALID, DBUS_TYPE_G_OBJECT_PATH, OUT_ssid, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_ConsoleKit_Manager_get_session_for_unix_process_reply) (DBusGProxy *proxy, char *OUT_ssid, GError *error, gpointer userdata);

static void
org_freedesktop_ConsoleKit_Manager_get_session_for_unix_process_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  char* OUT_ssid;
  dbus_g_proxy_end_call (proxy, call, &error, DBUS_TYPE_G_OBJECT_PATH, &OUT_ssid, G_TYPE_INVALID);
  (*(org_freedesktop_ConsoleKit_Manager_get_session_for_unix_process_reply)data->cb) (proxy, OUT_ssid, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_ConsoleKit_Manager_get_session_for_unix_process_async (DBusGProxy *proxy, const guint IN_pid, org_freedesktop_ConsoleKit_Manager_get_session_for_unix_process_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "GetSessionForUnixProcess", org_freedesktop_ConsoleKit_Manager_get_session_for_unix_process_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_UINT, IN_pid, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_ConsoleKit_Manager_get_current_session (DBusGProxy *proxy, char** OUT_ssid, GError **error)

{
  return dbus_g_proxy_call (proxy, "GetCurrentSession", error, G_TYPE_INVALID, DBUS_TYPE_G_OBJECT_PATH, OUT_ssid, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_ConsoleKit_Manager_get_current_session_reply) (DBusGProxy *proxy, char *OUT_ssid, GError *error, gpointer userdata);

static void
org_freedesktop_ConsoleKit_Manager_get_current_session_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  char* OUT_ssid;
  dbus_g_proxy_end_call (proxy, call, &error, DBUS_TYPE_G_OBJECT_PATH, &OUT_ssid, G_TYPE_INVALID);
  (*(org_freedesktop_ConsoleKit_Manager_get_current_session_reply)data->cb) (proxy, OUT_ssid, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_ConsoleKit_Manager_get_current_session_async (DBusGProxy *proxy, org_freedesktop_ConsoleKit_Manager_get_current_session_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "GetCurrentSession", org_freedesktop_ConsoleKit_Manager_get_current_session_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_ConsoleKit_Manager_get_sessions_for_unix_user (DBusGProxy *proxy, const guint IN_uid, GPtrArray** OUT_sessions, GError **error)

{
  return dbus_g_proxy_call (proxy, "GetSessionsForUnixUser", error, G_TYPE_UINT, IN_uid, G_TYPE_INVALID, dbus_g_type_get_collection ("GPtrArray", DBUS_TYPE_G_OBJECT_PATH), OUT_sessions, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_ConsoleKit_Manager_get_sessions_for_unix_user_reply) (DBusGProxy *proxy, GPtrArray *OUT_sessions, GError *error, gpointer userdata);

static void
org_freedesktop_ConsoleKit_Manager_get_sessions_for_unix_user_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  GPtrArray* OUT_sessions;
  dbus_g_proxy_end_call (proxy, call, &error, dbus_g_type_get_collection ("GPtrArray", DBUS_TYPE_G_OBJECT_PATH), &OUT_sessions, G_TYPE_INVALID);
  (*(org_freedesktop_ConsoleKit_Manager_get_sessions_for_unix_user_reply)data->cb) (proxy, OUT_sessions, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_ConsoleKit_Manager_get_sessions_for_unix_user_async (DBusGProxy *proxy, const guint IN_uid, org_freedesktop_ConsoleKit_Manager_get_sessions_for_unix_user_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "GetSessionsForUnixUser", org_freedesktop_ConsoleKit_Manager_get_sessions_for_unix_user_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_UINT, IN_uid, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_ConsoleKit_Manager_get_sessions_for_user (DBusGProxy *proxy, const guint IN_uid, GPtrArray** OUT_sessions, GError **error)

{
  return dbus_g_proxy_call (proxy, "GetSessionsForUser", error, G_TYPE_UINT, IN_uid, G_TYPE_INVALID, dbus_g_type_get_collection ("GPtrArray", DBUS_TYPE_G_OBJECT_PATH), OUT_sessions, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_ConsoleKit_Manager_get_sessions_for_user_reply) (DBusGProxy *proxy, GPtrArray *OUT_sessions, GError *error, gpointer userdata);

static void
org_freedesktop_ConsoleKit_Manager_get_sessions_for_user_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  GPtrArray* OUT_sessions;
  dbus_g_proxy_end_call (proxy, call, &error, dbus_g_type_get_collection ("GPtrArray", DBUS_TYPE_G_OBJECT_PATH), &OUT_sessions, G_TYPE_INVALID);
  (*(org_freedesktop_ConsoleKit_Manager_get_sessions_for_user_reply)data->cb) (proxy, OUT_sessions, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_ConsoleKit_Manager_get_sessions_for_user_async (DBusGProxy *proxy, const guint IN_uid, org_freedesktop_ConsoleKit_Manager_get_sessions_for_user_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "GetSessionsForUser", org_freedesktop_ConsoleKit_Manager_get_sessions_for_user_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_UINT, IN_uid, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_ConsoleKit_Manager_get_system_idle_hint (DBusGProxy *proxy, gboolean* OUT_idle_hint, GError **error)

{
  return dbus_g_proxy_call (proxy, "GetSystemIdleHint", error, G_TYPE_INVALID, G_TYPE_BOOLEAN, OUT_idle_hint, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_ConsoleKit_Manager_get_system_idle_hint_reply) (DBusGProxy *proxy, gboolean OUT_idle_hint, GError *error, gpointer userdata);

static void
org_freedesktop_ConsoleKit_Manager_get_system_idle_hint_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  gboolean OUT_idle_hint;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_BOOLEAN, &OUT_idle_hint, G_TYPE_INVALID);
  (*(org_freedesktop_ConsoleKit_Manager_get_system_idle_hint_reply)data->cb) (proxy, OUT_idle_hint, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_ConsoleKit_Manager_get_system_idle_hint_async (DBusGProxy *proxy, org_freedesktop_ConsoleKit_Manager_get_system_idle_hint_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "GetSystemIdleHint", org_freedesktop_ConsoleKit_Manager_get_system_idle_hint_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_ConsoleKit_Manager_get_system_idle_since_hint (DBusGProxy *proxy, char ** OUT_iso8601_datetime, GError **error)

{
  return dbus_g_proxy_call (proxy, "GetSystemIdleSinceHint", error, G_TYPE_INVALID, G_TYPE_STRING, OUT_iso8601_datetime, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_ConsoleKit_Manager_get_system_idle_since_hint_reply) (DBusGProxy *proxy, char * OUT_iso8601_datetime, GError *error, gpointer userdata);

static void
org_freedesktop_ConsoleKit_Manager_get_system_idle_since_hint_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  char * OUT_iso8601_datetime;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_STRING, &OUT_iso8601_datetime, G_TYPE_INVALID);
  (*(org_freedesktop_ConsoleKit_Manager_get_system_idle_since_hint_reply)data->cb) (proxy, OUT_iso8601_datetime, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_ConsoleKit_Manager_get_system_idle_since_hint_async (DBusGProxy *proxy, org_freedesktop_ConsoleKit_Manager_get_system_idle_since_hint_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "GetSystemIdleSinceHint", org_freedesktop_ConsoleKit_Manager_get_system_idle_since_hint_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_INVALID);
}
#endif /* defined DBUS_GLIB_CLIENT_WRAPPERS_org_freedesktop_ConsoleKit_Manager */

G_END_DECLS
