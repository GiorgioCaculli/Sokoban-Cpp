cmake_minimum_required(VERSION 3.21)
project(sokoban VERSION 1.1.0 DESCRIPTION "GzC's Sokoban Library")

include(GNUInstallDirs)

set(CMAKE_CXX_STANDARD 11)
set(Boost_USE_STATIC_LIBS OFF)

# Global libraries
find_package(Boost COMPONENTS date_time filesystem locale log unit_test_framework REQUIRED)
find_library(GZC_UTIL_LOGGER util_logger)
find_library(GZC_UTIL_SERIALIZE util_serialize)

# Global includes
include_directories(${Boost_INCLUDE_DIR})

# Sokoban Core Library
add_library(sokoban_core SHARED
        src/core/Actor.cpp
        src/core/Board.cpp
        src/core/Box.cpp
        src/core/Movable.cpp
        src/core/Platform.cpp
        src/core/Player.cpp
        src/core/Wall.cpp)
set_target_properties(sokoban_core PROPERTIES
        VERSION 1.1.0
        PUBLIC_HEADER
        include/gzc/games/sokoban/core/Actor.hpp
        include/gzc/games/sokoban/core/Board.hpp
        include/gzc/games/sokoban/core/Box.hpp
        include/gzc/games/sokoban/core/Movable.hpp
        include/gzc/games/sokoban/core/Platform.hpp
        include/gzc/games/sokoban/core/Player.hpp
        include/gzc/games/sokoban/core/Wall.hpp)
target_include_directories(sokoban_core PRIVATE include)
target_link_libraries(sokoban_core ${GZC_UTIL_LOGGER} ${GZC_UTIL_SERIALIZE} ${Boost_LIBRARIES})
install(TARGETS sokoban_core
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIB}
        PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

add_executable(sokoban src/main.cpp)
target_include_directories(sokoban PRIVATE include)
target_link_libraries(sokoban LINK_PUBLIC sokoban_core ${GZC_UTIL_LOGGER} ${GZC_UTIL_SERIALIZE} ${Boost_LIBRARIES})
