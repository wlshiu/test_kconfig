/* Everything */


/* License information */
#define QT_PRODUCT_LICENSEE "Open Source"
#define QT_PRODUCT_LICENSE "OpenSource"

// Qt Edition
#ifndef QT_EDITION
#  define QT_EDITION QT_EDITION_OPENSOURCE
#endif

#if defined(__SYMBIAN32__)
# define QT_BUILD_KEY "Symbian full-config"
#else
# if !defined(QT_NO_DEBUG)
#  if (defined(WIN64) || defined(_WIN64) || defined(__WIN64__))
#   define QT_BUILD_KEY "Windows x64 msvc debug full-config"
#  else
#   define QT_BUILD_KEY "Windows msvc debug full-config"
#  endif
# else
#  if (defined(WIN64) || defined(_WIN64) || defined(__WIN64__))
#   define QT_BUILD_KEY "Windows x64 msvc release full-config"
#  else
#   define QT_BUILD_KEY "Windows msvc release full-config"
#  endif
# endif
#endif

/* Machine byte-order */
#define Q_BIG_ENDIAN 4321
#define Q_LITTLE_ENDIAN 1234
#define Q_BYTE_ORDER Q_LITTLE_ENDIAN

// Compile time features
#define QT_ARCH_WINDOWS
#define QT_LARGEFILE_SUPPORT 64
#if defined(QT_BUILTIN_GIF_READER) && defined(QT_NO_BUILTIN_GIF_READER)
# undef QT_BUILTIN_GIF_READER
#elif !defined(QT_BUILTIN_GIF_READER)
# define QT_BUILTIN_GIF_READER 1
#endif

#if defined(QT_GRAPHICSSYSTEM_RASTER) && defined(QT_NO_GRAPHICSSYSTEM_RASTER)
# undef QT_GRAPHICSSYSTEM_RASTER
#elif !defined(QT_GRAPHICSSYSTEM_RASTER)
# define QT_GRAPHICSSYSTEM_RASTER
#endif

#if defined(QT_NO_DBUS) && defined(QT_DBUS)
# undef QT_NO_DBUS
#elif !defined(QT_NO_DBUS)
# define QT_NO_DBUS
#endif

#if defined(QT_NO_EXCEPTIONS) && defined(QT_EXCEPTIONS)
# undef QT_NO_EXCEPTIONS
#elif !defined(QT_NO_EXCEPTIONS)
# define QT_NO_EXCEPTIONS
#endif

#if defined(QT_NO_FONTCONFIG) && defined(QT_FONTCONFIG)
# undef QT_NO_FONTCONFIG
#elif !defined(QT_NO_FONTCONFIG)
# define QT_NO_FONTCONFIG
#endif

#if defined(QT_NO_FREETYPE) && defined(QT_FREETYPE)
# undef QT_NO_FREETYPE
#elif !defined(QT_NO_FREETYPE)
# define QT_NO_FREETYPE
#endif

#if defined(QT_NO_NIS) && defined(QT_NIS)
# undef QT_NO_NIS
#elif !defined(QT_NO_NIS)
# define QT_NO_NIS
#endif

#if defined(QT_NO_OPENGL) && defined(QT_OPENGL)
# undef QT_NO_OPENGL
#elif !defined(QT_NO_OPENGL)
# define QT_NO_OPENGL
#endif

#if defined(QT_NO_OPENSSL) && defined(QT_OPENSSL)
# undef QT_NO_OPENSSL
#elif !defined(QT_NO_OPENSSL)
# define QT_NO_OPENSSL
#endif

#if defined(QT_NO_OPENVG) && defined(QT_OPENVG)
# undef QT_NO_OPENVG
#elif !defined(QT_NO_OPENVG)
# define QT_NO_OPENVG
#endif

#if defined(QT_NO_PHONON) && defined(QT_PHONON)
# undef QT_NO_PHONON
#elif !defined(QT_NO_PHONON)
# define QT_NO_PHONON
#endif

#if defined(QT_NO_SCRIPTTOOLS) && defined(QT_SCRIPTTOOLS)
# undef QT_NO_SCRIPTTOOLS
#elif !defined(QT_NO_SCRIPTTOOLS)
# define QT_NO_SCRIPTTOOLS
#endif

#if defined(QT_NO_STYLE_CDE) && defined(QT_STYLE_CDE)
# undef QT_NO_STYLE_CDE
#elif !defined(QT_NO_STYLE_CDE)
# define QT_NO_STYLE_CDE
#endif

#if defined(QT_NO_STYLE_CLEANLOOKS) && defined(QT_STYLE_CLEANLOOKS)
# undef QT_NO_STYLE_CLEANLOOKS
#elif !defined(QT_NO_STYLE_CLEANLOOKS)
# define QT_NO_STYLE_CLEANLOOKS
#endif

#if defined(QT_NO_STYLE_GTK) && defined(QT_STYLE_GTK)
# undef QT_NO_STYLE_GTK
#elif !defined(QT_NO_STYLE_GTK)
# define QT_NO_STYLE_GTK
#endif

#if defined(QT_NO_STYLE_MOTIF) && defined(QT_STYLE_MOTIF)
# undef QT_NO_STYLE_MOTIF
#elif !defined(QT_NO_STYLE_MOTIF)
# define QT_NO_STYLE_MOTIF
#endif

#if defined(QT_NO_STYLE_PLASTIQUE) && defined(QT_STYLE_PLASTIQUE)
# undef QT_NO_STYLE_PLASTIQUE
#elif !defined(QT_NO_STYLE_PLASTIQUE)
# define QT_NO_STYLE_PLASTIQUE
#endif

#if defined(QT_NO_STYLE_S60) && defined(QT_STYLE_S60)
# undef QT_NO_STYLE_S60
#elif !defined(QT_NO_STYLE_S60)
# define QT_NO_STYLE_S60
#endif

#if defined(QT_NO_STYLE_WINDOWSCE) && defined(QT_STYLE_WINDOWSCE)
# undef QT_NO_STYLE_WINDOWSCE
#elif !defined(QT_NO_STYLE_WINDOWSCE)
# define QT_NO_STYLE_WINDOWSCE
#endif

#if defined(QT_NO_STYLE_WINDOWSMOBILE) && defined(QT_STYLE_WINDOWSMOBILE)
# undef QT_NO_STYLE_WINDOWSMOBILE
#elif !defined(QT_NO_STYLE_WINDOWSMOBILE)
# define QT_NO_STYLE_WINDOWSMOBILE
#endif

#if defined(QT_NO_WEBKIT) && defined(QT_WEBKIT)
# undef QT_NO_WEBKIT
#elif !defined(QT_NO_WEBKIT)
# define QT_NO_WEBKIT
#endif

#if defined(QT_NO_XMLPATTERNS) && defined(QT_XMLPATTERNS)
# undef QT_NO_XMLPATTERNS
#elif !defined(QT_NO_XMLPATTERNS)
# define QT_NO_XMLPATTERNS
#endif

#define QT_NO_INOTIFY
