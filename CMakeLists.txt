cmake_minimum_required(VERSION 3.21)
project(sokoban)

set(CMAKE_CXX_STANDARD 11)

find_package(Boost COMPONENTS date_time filesystem locale log REQUIRED)

include_directories(${Boost_INCLUDE_DIR})

include_directories(include)

add_executable(sokoban src/main.cpp)

add_library(sokoban_core STATIC
        src/core/Actor.cpp
        src/core/Board.cpp
        src/core/Box.cpp
        src/core/Movable.cpp
        src/core/Platform.cpp
        src/core/Player.cpp
        src/core/Wall.cpp)

find_library(SOKOBAN_CORE sokoban_core libs)
find_library(UTIL_LOGGER util_logger libs)
find_library(UTIL_SERIALIZE util_serialize libs)

target_link_libraries(sokoban LINK_PUBLIC ${SOKOBAN_CORE} ${UTIL_LOGGER} ${UTIL_SERIALIZE} ${Boost_LIBRARIES})
