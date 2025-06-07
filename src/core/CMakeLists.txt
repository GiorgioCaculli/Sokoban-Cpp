message("Core Library CMakeLists.txt")

# Sokoban Core Library
add_library(sokoban_core SHARED
        Actor.cpp
        Board.cpp
        Box.cpp
        Movable.cpp
        Platform.cpp
        Player.cpp
        Wall.cpp)
set_target_properties(sokoban_core PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties(sokoban_core PROPERTIES SOVERSION ${PROJECT_VERSION_MAJOR})
target_include_directories(sokoban_core PRIVATE include)
target_link_libraries(sokoban_core ${Boost_LIBRARIES})
install(TARGETS sokoban_core LIBRARY DESTINATION ${CMAKE_INSTALL_LIB})
