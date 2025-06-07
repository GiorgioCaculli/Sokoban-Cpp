message("Net CMakeLists")

# Sokoban Core Library
add_library(sokoban_net SHARED
        Socket.cpp
        Client.cpp
        Server.cpp
        ServerDedicated.cpp
        ServerP2P.cpp)
set_target_properties(sokoban_net PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties(sokoban_net PROPERTIES SOVERSION ${PROJECT_VERSION_MAJOR})
target_include_directories(sokoban_net PRIVATE include)
target_link_libraries(sokoban_net ${Boost_LIBRARIES})
install(TARGETS sokoban_net LIBRARY DESTINATION ${CMAKE_INSTALL_LIB})
