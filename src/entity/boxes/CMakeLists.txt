set(INCROOT ${PROJECT_SOURCE_DIR}/src/entity/boxes)
set(SRCROOT ${PROJECT_SOURCE_DIR}/src/entity/boxes)

set(SRC
    ${SRC}
    ${SRCROOT}/Box.cpp
    ${INCROOT}/Box.hpp
    ${SRCROOT}/Crate.cpp
    ${INCROOT}/Crate.hpp
    ${SRCROOT}/PowerUp.cpp
    ${INCROOT}/PowerUp.hpp
    PARENT_SCOPE
)

SET(INCDIRS
    ${INCDIRS}
    ${INCROOT}
    PARENT_SCOPE
)