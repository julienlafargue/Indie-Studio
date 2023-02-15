set(INCROOT ${PROJECT_SOURCE_DIR}/src/entity)
set(SRCROOT ${PROJECT_SOURCE_DIR}/src/entity)

set(SRC
    ${SRCROOT}/Button.cpp
    ${INCROOT}/Button.hpp
    ${INCROOT}/IEntity2D.hpp
    ${INCROOT}/IEntity3D.hpp
)

set(INCDIRS ${INCROOT})

add_subdirectory(boxes)

add_subdirectory(player)

add_subdirectory(bombs)
source_group("" FILES ${SRC})

set(LIB_NAME entity)

add_library(${LIB_NAME} ${SRC})

target_include_directories(${LIB_NAME} PRIVATE ${INCDIRS})
target_include_directories(${LIB_NAME} PUBLIC ${INCROOT})
target_include_directories(${LIB_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(${LIB_NAME} enum)

target_link_libraries(${LIB_NAME} raylib_ec)
