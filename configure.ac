AC_PREREQ([2.69])

AC_INIT([sokoban], [1.1.2], [devs@calata.be], [gzc-sokoban], [https://gitlab.com/GiorgioCaculli/Sokoban-Cpp])
AC_CONFIG_AUX_DIR([build-aux])
AM_INIT_AUTOMAKE([-Wall -Werror foreign subdir-objects])

AM_PROG_AR
LT_PREREQ([2.4.6])
LT_INIT([dlopen])

AC_LANG([C++])

AC_CONFIG_SRCDIR([src])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_MACRO_DIR([m4])

# Check for Programs
AC_PROG_CXX
AC_PROG_CXXCPP
AC_PROG_INSTALL

# Enforce C++11
AX_CXX_COMPILE_STDCXX([11], [noext], [mandatory])

# Check for libraries
AC_SEARCH_LIBS([pthread_create], [pthread])
AC_LIB_LINKFLAGS([util_logger])
# AC_SEARCH_LIBS([save], [util_serialize])
AX_BOOST_BASE([1.76])
AX_BOOST_SYSTEM
AX_BOOST_FILESYSTEM
AX_BOOST_DATE_TIME
AX_BOOST_LOG
AX_BOOST_LOG_SETUP
AX_BOOST_LOCALE
AX_BOOST_THREAD
AX_BOOST_UNIT_TEST_FRAMEWORK

# Check for header files
AC_CHECK_HEADERS([
    iostream
    sstream
    string
    vector
    array
    map
])

# Check for typedefs, structures and compiler characteristics

# Check for library functions
AC_CONFIG_FILES([
    src/core/Makefile
    src/Makefile
    Makefile
])

AC_CONFIG_LINKS([
    assets/levels/00.lvl:data/levels/00.lvl
    assets/levels/01.lvl:data/levels/01.lvl
    assets/levels/02.lvl:data/levels/02.lvl
    assets/levels/03.lvl:data/levels/03.lvl
    assets/levels/04.lvl:data/levels/04.lvl
    assets/levels/05.lvl:data/levels/05.lvl
    assets/levels/06.lvl:data/levels/06.lvl
    assets/levels/07.lvl:data/levels/07.lvl
    assets/levels/08.lvl:data/levels/08.lvl
    assets/levels/09.lvl:data/levels/09.lvl
    assets/levels/10.lvl:data/levels/10.lvl
    assets/levels/11.lvl:data/levels/11.lvl
    assets/levels/12.lvl:data/levels/12.lvl
    assets/levels/13.lvl:data/levels/13.lvl
    assets/levels/14.lvl:data/levels/14.lvl
    assets/levels/15.lvl:data/levels/15.lvl
    assets/levels/16.lvl:data/levels/16.lvl
    assets/levels/17.lvl:data/levels/17.lvl
    assets/levels/18.lvl:data/levels/18.lvl
    assets/levels/19.lvl:data/levels/19.lvl
    assets/levels/20.lvl:data/levels/20.lvl
    assets/levels/21.lvl:data/levels/21.lvl
    assets/levels/22.lvl:data/levels/22.lvl
    assets/levels/23.lvl:data/levels/23.lvl
    assets/levels/24.lvl:data/levels/24.lvl
    assets/levels/25.lvl:data/levels/25.lvl
    assets/levels/26.lvl:data/levels/26.lvl
])

AC_OUTPUT
