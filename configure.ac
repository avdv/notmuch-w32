#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.68])
AC_INIT([notmuch], [0.15.2], [donotuse@mail.org])
AC_CONFIG_SRCDIR([command-line-arguments.c])
AC_CONFIG_HEADERS([config.h])

AC_CONFIG_MACRO_DIR([m4])
AM_INIT_AUTOMAKE([foreign])

AM_SILENT_RULES([yes])

# Checks for programs.
AC_PROG_AWK
AC_PROG_CXX
AC_PROG_CC
AM_PROG_CC_STDC

gl_EARLY

AC_PROG_INSTALL
AC_PROG_LN_S
AC_PROG_MAKE_SET
AC_PROG_RANLIB


# Checks for libraries.

gl_INIT

PKG_CHECK_MODULES([TALLOC], [talloc])
PKG_CHECK_MODULES([GMIME], [gmime-2.6 >= 2.6])

AC_CHECK_PROG(XAPIAN_CONFIG,xapian-config,xapian-config,no)

AS_IF([test "x$XAPIAN_CONFIG" = "xno"],[
   AC_MSG_ERROR([
   *** xapian could not be found; please install it
   *** e.g., in debian/ubuntu the package would be 'libxapian-dev'
   *** If you compiled it yourself, you should ensure that xapian-config
   *** is in your PATH.])],
   [xapian_version=$($XAPIAN_CONFIG --version | sed -e 's/.* //')])

XAPIAN_CXXFLAGS="`$XAPIAN_CONFIG --cxxflags`"
XAPIAN_LIBS="`$XAPIAN_CONFIG --libs`"

AC_SUBST(XAPIAN_CXXFLAGS)
AC_SUBST(XAPIAN_LIBS)

# Checks for header files.
AC_CHECK_HEADERS([sys/time.h pwd.h])

# Checks for typedefs, structures, and compiler characteristics.
dnl AC_HEADER_STDBOOL
dnl AC_C_INLINE
dnl AC_TYPE_MODE_T
dnl AC_TYPE_PID_T
dnl AC_TYPE_SIZE_T
dnl AC_TYPE_SSIZE_T
dnl AC_TYPE_UINT32_T
dnl AC_TYPE_UINT64_T

# Checks for library functions.
AC_FUNC_FORK

dnl AC_FUNC_MALLOC
dnl AC_FUNC_MKTIME
dnl AC_FUNC_REALLOC

AC_CHECK_FUNCS([setitimer])

dnl                 bindings/go/Makefile
dnl                 bindings/python/docs/Makefile

AC_CONFIG_FILES([
                 gnulib/Makefile
		 lib/Makefile
		 parse-time-string/Makefile
		 util/Makefile
		 man/Makefile
		 Makefile
])
dnl AC_CONFIG_SUBDIRS([contrib/notmuch-deliver])
AC_OUTPUT
