AC_INIT([gposttl], [0.9.3], [gmhossain@gmail.com])
AC_CONFIG_MACRO_DIRS([m4])

AM_INIT_AUTOMAKE([-Wall -Werror foreign])

dnl Checks for programs.
AC_PROG_CC
AC_PROG_CC_STDC
AX_PROG_CC_FOR_BUILD
AC_PROG_INSTALL
AC_PROG_CPP
AC_PROG_MAKE_SET

AC_USE_SYSTEM_EXTENSIONS
AM_PROG_AR

dnl libtool
LT_INIT([dlopen])
AC_SUBST([LIBTOOL_DEPS])

AC_DISABLE_STATIC
AC_ENABLE_SHARED

AC_CONFIG_HEADERS(config.h)
AC_CONFIG_FILES(Makefile  data/Makefile  doc/Makefile src/Makefile)

dnl AC_DEFINE_UNQUOTED([DATADIR], ["$datadir"] ,[data])
CPPFLAGS="-DDATADIR=\\\"${datadir}\\\""
AC_OUTPUT


