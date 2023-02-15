set(INCROOT ${PROJECT_SOURCE_DIR}/src/scene)
set(SRCROOT ${PROJECT_SOURCE_DIR}/src/scene)

set(SRC
    ${INCROOT}/IScene.hpp
    )

set(INCDIRS ${INCROOT})

add_subdirectory(menu)

add_subdirectory(game)
add_subdirectory(settings)
add_subdirectory(commands)
add_subdirectory(gameSettings)

source_group("" FILES ${SRC})

set(LIB_NAME scene)

add_library(scene ${SRC})

target_include_directories(${LIB_NAME} PRIVATE ${INCDIRS})
target_include_directories(${LIB_NAME} PUBLIC ${INCROOT})
target_include_directories(scene PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(scene enum)

target_link_libraries(scene raylib_ec)

target_link_libraries(scene core)

target_link_libraries(scene map)

