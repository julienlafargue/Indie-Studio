set(INCROOT ${PROJECT_SOURCE_DIR}/src/entity/bombs)
set(SRCROOT ${PROJECT_SOURCE_DIR}/src/entity/bombs)

set(SRC
    ${SRC}
    ${SRCROOT}/Bomb.cpp
    ${INCROOT}/Bomb.hpp
    PARENT_SCOPE
)

SET(INCDIRS
    ${INCDIRS}
    ${INCROOT}
    PARENT_SCOPE
)
