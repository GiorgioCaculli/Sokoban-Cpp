include $(top_srcdir)/common.mk

ACLOCAL_AMFLAGS = -I m4 --install

EXTRA_DIST = $(top_srcdir)/include

SUBDIRS = src

noinst_PROGRAMS = sokoban

sokoban_SOURCES = src/main.cpp

coreincludedir = $(includedir)/gzc/games/sokoban/core
coreinclude_HEADERS = include/gzc/games/sokoban/core/Actor.hpp
coreinclude_HEADERS += include/gzc/games/sokoban/core/Board.hpp
coreinclude_HEADERS += include/gzc/games/sokoban/core/Box.hpp
coreinclude_HEADERS += include/gzc/games/sokoban/core/Movable.hpp
coreinclude_HEADERS += include/gzc/games/sokoban/core/Platform.hpp
coreinclude_HEADERS += include/gzc/games/sokoban/core/Player.hpp
coreinclude_HEADERS += include/gzc/games/sokoban/core/Wall.hpp

sokoban_CPPFLAGS = $(BOOST_CPPFLAGS)

sokoban_LDADD = src/core/gzc/games/sokoban/core/libsokoban_core.la
sokoban_LDADD += $(LIBUTIL_LOGGER)
sokoban_LDADD += $(BOOST_LDFLAGS)
sokoban_LDADD += $(BOOST_DATE_TIME_LIB)
sokoban_LDADD += $(BOOST_FILESYSTEM_LIB)
sokoban_LDADD += $(BOOST_LOCALE_LIB)
sokoban_LDADD += $(BOOST_LOG_LIB)
sokoban_LDADD += $(BOOST_LOG_SETUP_LIB)
sokoban_LDADD += $(BOOST_SYSTEM_LIB)
sokoban_LDADD += $(BOOST_THREAD_LIB)
