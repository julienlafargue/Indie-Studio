set(INCROOT ${PROJECT_SOURCE_DIR}/src/)
set(SRCROOT ${PROJECT_SOURCE_DIR}/src/)

set(SRC 
    ${SRCROOT}main.cpp)

add_subdirectory(map)
add_subdirectory(enum)
add_subdirectory(core)
add_subdirectory(entity)
add_subdirectory(scene)
add_subdirectory(raylib_encapsulation)

add_executable(${TARGET_NAME} ${SRC})

target_link_libraries(${TARGET_NAME} raylib)
target_link_libraries(${TARGET_NAME} map)
target_link_libraries(${TARGET_NAME} enum)
target_link_libraries(${TARGET_NAME} core)
target_link_libraries(${TARGET_NAME} scene)
target_link_libraries(${TARGET_NAME} entity)
target_link_libraries(${TARGET_NAME} raylib_ec)

add_custom_command(TARGET ${TARGET_NAME} 
	POST_BUILD
	COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:${TARGET_NAME}> ${PROJECT_SOURCE_DIR})