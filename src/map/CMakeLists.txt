set(INCROOT ${PROJECT_SOURCE_DIR}/src/map)
set(SRCROOT ${PROJECT_SOURCE_DIR}/src/map)

set(SRC
    ${SRCROOT}/Map.cpp
    ${INCROOT}/Map.hpp
)

set(INCDIRS ${INCROOT})

add_subdirectory(map_generation)

source_group("" FILES ${SRC})

set(LIB_NAME map)

add_library(map ${SRC})

target_include_directories(${LIB_NAME} PRIVATE ${INCDIRS})
target_include_directories(${LIB_NAME} PUBLIC ${INCROOT})
target_include_directories(map PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(map raylib_ec)

target_link_libraries(map enum)

target_link_libraries(map entity)
