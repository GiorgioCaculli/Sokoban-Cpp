AM_CXXFLAGS = -Wall
AM_CXXFLAGS += -Wextra
AM_CXXFLAGS += -Werror
AM_CXXFLAGS += -I$(top_srcdir)/include

AM_LDFLAGS = $(Boost_LDFLAGS)

GZC_SOKOBAN_CORE_VERSION = 1:1:1
