CMAKE_MINIMUM_REQUIRED(VERSION 3.17)
project(bomberman)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})
set(CMAKE_CXX_STANDARD 17)

set(TARGET_NAME bomberman)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
FIND_PACKAGE(raylib REQUIRED)
find_package(OpenGL REQUIRED)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
FIND_PACKAGE(raylib REQUIRED)

add_compile_options(
    "-Wall" "-Wextra" "-Wshadow"
    "$<$<CONFIG:RELEASE>:-O3;-Werror>"
    "$<$<CONFIG:DEBUG>:-O0;-g3;-ggdb>"
)

add_subdirectory(src)
