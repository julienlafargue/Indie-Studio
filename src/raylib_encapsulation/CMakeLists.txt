set(INCROOT ${PROJECT_SOURCE_DIR}/src/raylib_encapsulation)
set(SRCROOT ${PROJECT_SOURCE_DIR}/src/raylib_encapsulation)

set(SRC
    ${SRCROOT}/Draw.cpp
    ${SRCROOT}/Input.cpp
    ${SRCROOT}/Miscellaneous.cpp
    ${SRCROOT}/Mouse.cpp
    ${SRCROOT}/Music.cpp
    ${SRCROOT}/Rcamera.cpp
    ${SRCROOT}/Rgesture.cpp
    ${SRCROOT}/Text.cpp
    ${SRCROOT}/TwoDTexture.cpp
    ${SRCROOT}/Vector2D.cpp
    ${SRCROOT}/Vector3D.cpp
    ${SRCROOT}/Window.cpp
    ${SRCROOT}/Images.cpp
    ${SRCROOT}/Sound.cpp
    ${SRCROOT}/Collisions.cpp
    ${INCROOT}/Draw.hpp
    ${INCROOT}/Input.hpp
    ${INCROOT}/Miscellaneous.hpp
    ${INCROOT}/Mouse.hpp
    ${INCROOT}/Music.hpp
    ${INCROOT}/Sound.hpp
    ${INCROOT}/Rcamera.hpp
    ${INCROOT}/Rgesture.hpp
    ${INCROOT}/Text.hpp
    ${INCROOT}/TwoDTexture.hpp
    ${INCROOT}/Vector2D.hpp
    ${INCROOT}/Vector3D.hpp
    ${INCROOT}/Window.hpp
    ${INCROOT}/Images.hpp
    ${INCROOT}/raylib.hpp
    ${INCROOT}/Collisions.hpp
    )

set(INCDIRS ${INCROOT})

add_subdirectory(Shapes)
add_subdirectory(3DShapes)

source_group("" FILES ${SRC})

set(LIB_NAME raylib_ec)

add_library(${LIB_NAME} ${SRC})

target_link_libraries(${LIB_NAME} raylib) 

target_include_directories(${LIB_NAME} PRIVATE ${INCDIRS})
target_include_directories(${LIB_NAME} PUBLIC ${INCROOT})
target_include_directories(raylib_ec PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})