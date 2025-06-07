

add_executable(sokoban main.cpp)
target_include_directories(sokoban PRIVATE include)
target_link_libraries(sokoban LINK_PUBLIC sokoban_core sokoban_net ${GZC_UTIL_LOGGER} ${GZC_UTIL_SERIALIZE})
