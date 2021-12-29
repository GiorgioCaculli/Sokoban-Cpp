AC_PREREQ([2.69])

AC_INIT([sokoban], [1.1], [devs@calata.be])
AM_INIT_AUTOMAKE([-Wall -Werror foreign subdir-objects])

AM_PROG_AR
LT_PREREQ([2.4.6])
LT_INIT([dlopen])

AC_LANG([C++])

AC_CONFIG_SRCDIR([src/main.cpp])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_MACRO_DIR([m4])

# Check for Programs
AC_PROG_CXX
AC_PROG_INSTALL

# Enforce C++11
AX_CXX_COMPILE_STDCXX([11], [noext], [mandatory])

# Check for libraries
AC_SEARCH_LIBS([pthread_create], [pthread])
AX_BOOST_BASE([1.76])
AX_BOOST_SYSTEM
AX_BOOST_FILESYSTEM
AX_BOOST_DATE_TIME
AX_BOOST_LOG
AX_BOOST_LOG_SETUP
AX_BOOST_LOCALE
AX_BOOST_THREAD

# Check for header files
AC_CHECK_HEADERS([
    math.h
    stdlib.h
    pthread.h
])

# Check for typedefs, structures and compiler characteristics

# Check for library functions
AC_CONFIG_FILES([
    src/core/Makefile
    src/Makefile
    Makefile
])

AC_CONFIG_LINKS([
    assets/levels/00.lvl:src/assets/levels/00.lvl
    assets/levels/01.lvl:src/assets/levels/01.lvl
    assets/levels/02.lvl:src/assets/levels/02.lvl
    assets/levels/03.lvl:src/assets/levels/03.lvl
    assets/levels/04.lvl:src/assets/levels/04.lvl
    assets/levels/05.lvl:src/assets/levels/05.lvl
    assets/levels/06.lvl:src/assets/levels/06.lvl
    assets/levels/07.lvl:src/assets/levels/07.lvl
    assets/levels/08.lvl:src/assets/levels/08.lvl
    assets/levels/09.lvl:src/assets/levels/09.lvl
    assets/levels/10.lvl:src/assets/levels/10.lvl
    assets/levels/11.lvl:src/assets/levels/11.lvl
    assets/levels/12.lvl:src/assets/levels/12.lvl
    assets/levels/13.lvl:src/assets/levels/13.lvl
    assets/levels/14.lvl:src/assets/levels/14.lvl
    assets/levels/15.lvl:src/assets/levels/15.lvl
    assets/levels/16.lvl:src/assets/levels/16.lvl
    assets/levels/17.lvl:src/assets/levels/17.lvl
    assets/levels/18.lvl:src/assets/levels/18.lvl
    assets/levels/19.lvl:src/assets/levels/19.lvl
    assets/levels/20.lvl:src/assets/levels/20.lvl
    assets/levels/21.lvl:src/assets/levels/21.lvl
    assets/levels/22.lvl:src/assets/levels/22.lvl
    assets/levels/23.lvl:src/assets/levels/23.lvl
    assets/levels/24.lvl:src/assets/levels/24.lvl
    assets/levels/25.lvl:src/assets/levels/25.lvl
    assets/levels/26.lvl:src/assets/levels/26.lvl
])

AC_OUTPUT
