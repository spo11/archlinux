AR = '/usr/bin/ar'
ARFLAGS = 'rcs'
BINDIR = '/usr/local/bin'
CC_VERSION = ('4', '5', '2')
CFLAGS_ATK = ['-pthread', '-pthread']
CFLAGS_DBUSMENUGTK = ['-pthread', '-pthread']
CFLAGS_GDK = ['-pthread', '-pthread']
CFLAGS_GDKPIXBUF = ['-pthread', '-pthread']
CFLAGS_GIO = ['-pthread', '-pthread']
CFLAGS_GTK = ['-pthread', '-pthread']
COMPILER_CXX = 'g++'
CPPPATH_ST = '-I%s'
CPPUMAKER = '/usr/lib/libreoffice/basis3.3/sdk/bin/cppumaker'
CXX = ['/usr/bin/g++']
CXXFLAGS_ATK = ['-pthread', '-pthread']
CXXFLAGS_DBUSMENUGTK = ['-pthread', '-pthread']
CXXFLAGS_GDK = ['-pthread', '-pthread']
CXXFLAGS_GDKPIXBUF = ['-pthread', '-pthread']
CXXFLAGS_GIO = ['-pthread', '-pthread']
CXXFLAGS_GTK = ['-pthread', '-pthread']
CXXFLAGS_MACBUNDLE = ['-fPIC']
CXXFLAGS_cxxshlib = ['-fPIC']
CXXLNK_SRC_F = []
CXXLNK_TGT_F = ['-o']
CXX_NAME = 'gcc'
CXX_SRC_F = []
CXX_TGT_F = ['-c', '-o']
DEFINES = ['HAVE_GIO=1', 'HAVE_DBUSMENU=1', 'HAVE_DBUSMENUGTK=1', 'HAVE_GTK=1', 'HAVE_ATK=1', 'HAVE_GDKPIXBUF=1', 'HAVE_GDK=1', 'HAVE_X11=1', 'HAVE_XPROTO=1']
DEFINES_ST = '-D%s'
DEST_BINFMT = 'elf'
DEST_CPU = 'x86'
DEST_OS = 'linux'
HAVE_ATK = 1
HAVE_DBUSMENU = 1
HAVE_DBUSMENUGTK = 1
HAVE_GDK = 1
HAVE_GDKPIXBUF = 1
HAVE_GIO = 1
HAVE_GTK = 1
HAVE_X11 = 1
HAVE_XPROTO = 1
INCLUDES_ATK = ['/usr/include/atk-1.0', '/usr/include/glib-2.0', '/usr/lib/glib-2.0/include']
INCLUDES_DBUSMENU = ['/usr/include/libdbusmenu-0.4']
INCLUDES_DBUSMENUGTK = ['/usr/include/libdbusmenu-0.4', '/usr/include/gdk-pixbuf-2.0', '/usr/include/gtk-2.0', '/usr/include/libpng14', '/usr/include/glib-2.0', '/usr/lib/glib-2.0/include', '/usr/lib/gtk-2.0/include', '/usr/include/atk-1.0', '/usr/include/cairo', '/usr/include/pango-1.0', '/usr/include/gio-unix-2.0/', '/usr/include/pixman-1', '/usr/include/freetype2']
INCLUDES_GDK = ['/usr/include/gtk-2.0', '/usr/lib/gtk-2.0/include', '/usr/include/gio-unix-2.0/', '/usr/include/cairo', '/usr/include/pango-1.0', '/usr/include/gdk-pixbuf-2.0', '/usr/include/glib-2.0', '/usr/lib/glib-2.0/include', '/usr/include/pixman-1', '/usr/include/freetype2', '/usr/include/libpng14']
INCLUDES_GDKPIXBUF = ['/usr/include/gdk-pixbuf-2.0', '/usr/include/libpng14', '/usr/include/glib-2.0', '/usr/lib/glib-2.0/include']
INCLUDES_GIO = ['/usr/include/glib-2.0', '/usr/lib/glib-2.0/include']
INCLUDES_GTK = ['/usr/include/gtk-2.0', '/usr/lib/gtk-2.0/include', '/usr/include/atk-1.0', '/usr/include/cairo', '/usr/include/gdk-pixbuf-2.0', '/usr/include/pango-1.0', '/usr/include/gio-unix-2.0/', '/usr/include/glib-2.0', '/usr/lib/glib-2.0/include', '/usr/include/pixman-1', '/usr/include/freetype2', '/usr/include/libpng14']
LIBDIR = '/usr/local/lib'
LIBPATH_CPPUHELPERLIB = ['/usr/lib/libreoffice/basis3.3/sdk/lib']
LIBPATH_CPPULIB = ['/usr/lib/libreoffice/basis3.3/sdk/lib']
LIBPATH_SALLIB = ['/usr/lib/libreoffice/basis3.3/sdk/lib']
LIBPATH_ST = '-L%s'
LIB_ATK = ['atk-1.0', 'gobject-2.0', 'gthread-2.0', 'rt', 'glib-2.0']
LIB_CPPUHELPERLIB = ['uno_cppuhelpergcc3']
LIB_CPPULIB = ['uno_cppu']
LIB_DBUSMENU = ['dbusmenu-glib']
LIB_DBUSMENUGTK = ['dbusmenu-gtk', 'dbusmenu-glib', 'gtk-x11-2.0', 'gdk-x11-2.0', 'atk-1.0', 'gio-2.0', 'pangoft2-1.0', 'pangocairo-1.0', 'gdk_pixbuf-2.0', 'm', 'cairo', 'png14', 'pango-1.0', 'freetype', 'fontconfig', 'gobject-2.0', 'gmodule-2.0', 'gthread-2.0', 'rt', 'glib-2.0']
LIB_GDK = ['gdk-x11-2.0', 'pangocairo-1.0', 'gdk_pixbuf-2.0', 'm', 'pango-1.0', 'cairo', 'gobject-2.0', 'gmodule-2.0', 'png14', 'gthread-2.0', 'rt', 'glib-2.0']
LIB_GDKPIXBUF = ['gdk_pixbuf-2.0', 'm', 'gobject-2.0', 'gmodule-2.0', 'png14', 'gthread-2.0', 'rt', 'glib-2.0']
LIB_GIO = ['gio-2.0', 'gobject-2.0', 'gmodule-2.0', 'gthread-2.0', 'rt', 'glib-2.0']
LIB_GTK = ['gtk-x11-2.0', 'gdk-x11-2.0', 'atk-1.0', 'gio-2.0', 'pangoft2-1.0', 'pangocairo-1.0', 'gdk_pixbuf-2.0', 'm', 'cairo', 'png14', 'pango-1.0', 'freetype', 'fontconfig', 'gobject-2.0', 'gmodule-2.0', 'gthread-2.0', 'rt', 'glib-2.0']
LIB_SALLIB = ['uno_sal']
LIB_ST = '-l%s'
LIB_X11 = ['X11']
LINKFLAGS = ['-Wl,--hash-style=gnu', '-Wl,--as-needed']
LINKFLAGS_ATK = ['-pthread', '-pthread']
LINKFLAGS_DBUSMENUGTK = ['-pthread', '-pthread']
LINKFLAGS_GDK = ['-pthread', '-pthread']
LINKFLAGS_GDKPIXBUF = ['-pthread', '-pthread']
LINKFLAGS_GIO = ['-pthread', '-pthread']
LINKFLAGS_GTK = ['-pthread', '-pthread']
LINKFLAGS_MACBUNDLE = ['-bundle', '-undefined', 'dynamic_lookup']
LINKFLAGS_cxxshlib = ['-shared']
LINKFLAGS_cxxstlib = ['-Wl,-Bstatic']
LINK_CXX = ['/usr/bin/g++']
OFFAPI_RDB = '/usr/lib/libreoffice/basis3.3/program/offapi.rdb'
PKGCONFIG = '/usr/bin/pkg-config'
PREFIX = '/usr/local'
RPATH_ST = '-Wl,-rpath,%s'
SHLIB_MARKER = '-Wl,-Bdynamic'
SONAME_ST = '-Wl,-h,%s'
STLIBPATH_ST = '-L%s'
STLIB_MARKER = '-Wl,-Bstatic'
STLIB_ST = '-l%s'
TYPES_RDB = '/usr/lib/libreoffice/ure//share/misc/types.rdb'
cxxprogram_PATTERN = '%s'
cxxshlib_PATTERN = 'lib%s.so'
cxxstlib_PATTERN = 'lib%s.a'
define_key = ['HAVE_GIO', 'HAVE_DBUSMENU', 'HAVE_DBUSMENUGTK', 'HAVE_GTK', 'HAVE_ATK', 'HAVE_GDKPIXBUF', 'HAVE_GDK', 'HAVE_X11', 'HAVE_XPROTO']
macbundle_PATTERN = '%s.bundle'
