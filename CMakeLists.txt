cmake_minimum_required(VERSION 3.30)
project(sokoban VERSION 1.1.2 DESCRIPTION "GzC's Sokoban Library")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS_DEBUG "-march=native -O0 -g")
set(CMAKE_CXX_FLAGS_RELEASE "-mtune=generic -O2 -Wpedantic")
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wfloat-equal -Wundef")
set(THREADS_PREFER_PTHREAD_FLAG ON)

include(GNUInstallDirs)

include(InstallRequiredSystemLibraries)

set(CPACK_PACKAGE_DESCRIPTION_SUMMARY ${CMAKE_PROJECT_DESCRIPTION})
set(CPACK_PACKAGE_VENDOR "Giorgio Caculli")
set(CPACK_PACKAGE_DESCRIPTION_FILE "${CMAKE_CURRENT_SOURCE_DIR}/README.md")
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/LICENSE.md")
set(CPACK_PACKAGE_VERSION_MAJOR ${CMAKE_PROJECT_VERSION_MAJOR})
set(CPACK_PACKAGE_VERSION_MINOR ${CMAKE_PROJECT_VERSION_MINOR})
set(CPACK_PACKAGE_VERSION_PATCH ${CMAKE_PROJECT_VERSION_PATCH})
set(CPACK_PACKAGE_INSTALL_DIRECTORY "CMake ${CMake_VERSION_MAJOR}.${CMake_VERSION_MINOR}")
if (WIN32 AND NOT UNIX)
    # There is a bug in NSI that does not handle full UNIX paths properly.
    # Make sure there is at least one set of four backlashes.
    set(CPACK_PACKAGE_ICON "${CMake_SOURCE_DIR}/Utilities/Release\\\\InstallIcon.bmp")
    set(CPACK_NSIS_INSTALLED_ICON_NAME "bin\\\\${CMAKE_PROJECT_NAME}.exe")
    set(CPACK_NSIS_DISPLAY_NAME "${CPACK_PACKAGE_INSTALL_DIRECTORY} ${CMAKE_PROJECT_NAME}")
    set(CPACK_NSIS_HELP_LINK "http:\\\\\\\\www.gitlab.com\\\\GiorgioCaculli\\\\Sokoban-Cpp")
    set(CPACK_NSIS_URL_INFO_ABOUT "https:\\\\\\\\www.gitlab.com\\\\GiorgioCaculli\\\\Sokoban-Cpp")
    set(CPACK_NSIS_CONTACT "giorgio.caculli@icloud.com")
    set(CPACK_NSIS_MODIFY_PATH ON)
else ()
    set(CPACK_STRIP_FILES "bin/${CMAKE_PROJECT_NAME}")
    set(CPACK_SOURCE_STRIP_FILES "")
endif ()
set(CPACK_PACKAGE_EXECUTABLES "${CMAKE_PROJECT_NAME}" "${CMAKE_PROJECT_DESCRIPTION}")

include(CPack)
include_directories(include)

find_package(Boost
        COMPONENTS
        date_time
        filesystem
        locale
        log
        unit_test_framework
        REQUIRED CONFIG)

# Global libraries
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
set_target_properties(sokoban_core PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties(sokoban_core PROPERTIES SOVERSION ${PROJECT_VERSION_MAJOR})
target_include_directories(sokoban_core PRIVATE include)
target_link_libraries(sokoban_core ${Boost_LIBRARIES})
install(TARGETS sokoban_core LIBRARY DESTINATION ${CMAKE_INSTALL_LIB})

install(DIRECTORY "include/" DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}" FILES_MATCHING PATTERN "*.hpp")

add_executable(sokoban src/main.cpp)
target_include_directories(sokoban PRIVATE include)
target_link_libraries(sokoban LINK_PUBLIC sokoban_core ${GZC_UTIL_LOGGER} ${GZC_UTIL_SERIALIZE})
