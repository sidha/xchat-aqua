#ifndef _CONFIG_H
#define _CONFIG_H

#ifndef ENABLE_NLS
#	define ENABLE_NLS 1
#endif

#if ENABLE_NLS
/* Gettext package name */
#  define GETTEXT_PACKAGE "xchat"
#  define GLIB_LOCALE_DIR "/usr/local/share/locale"
#  define HAVE_ALLOCA 1
#  define HAVE_STDDEF_H 1
#  define HAVE_STRING_H 1
#  define HAVE_STDLIB_H 1
#endif

/* Define to the full name of this package. */
#define PACKAGE_NAME "XChat"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "XChat 2.8.8-svn1441"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "xchat"

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.8.8-svn1441"

#define XCHATLIBDIR "/usr/local/lib"

#include "build_number.h"

#define MYVERSION XCHAT_AQUA_VERSION_STRING

#define HAVE_SNPRINTF  1
#define HAVE_VSNPRINTF 1
#define USE_IPV6 1
#define USE_PLUGIN 1
#define USE_OPENSSL 1

#endif
