set(INCROOT ${PROJECT_SOURCE_DIR}/src/map/map_generation)
set(SRCROOT ${PROJECT_SOURCE_DIR}/src/map/map_generation)

set(SRC
    ${SRC}
    ${SRCROOT}/MapGeneration.cpp
    ${INCROOT}/MapGeneration.hpp
    ${INCROOT}/MapPattern.cpp
    ${INCROOT}/MapPattern.hpp
    PARENT_SCOPE
)


SET(INCDIRS
    ${INCDIRS}
    ${INCROOT}
    PARENT_SCOPE
)