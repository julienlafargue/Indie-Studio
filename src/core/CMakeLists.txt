set(INCROOT ${PROJECT_SOURCE_DIR}/src/core)
set(SRCROOT ${PROJECT_SOURCE_DIR}/src/core)

set(SRC
    ${SRCROOT}/Timer.cpp
    ${SRCROOT}/Core.cpp
    ${SRCROOT}/CoreParameters.cpp
    ${SRCROOT}/GameParameters.cpp
    ${INCROOT}/GameParameters.hpp
    ${INCROOT}/CoreParameters.hpp
    ${INCROOT}/Core.hpp
    ${INCROOT}/Timer.hpp
    )

add_library(core ${SRC})

target_include_directories(core PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
