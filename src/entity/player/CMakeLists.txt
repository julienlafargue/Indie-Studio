set(INCROOT ${PROJECT_SOURCE_DIR}/src/entity/player)
set(SRCROOT ${PROJECT_SOURCE_DIR}/src/entity/player)

set(SRC
    ${SRC}
    ${SRCROOT}/Player.cpp
    ${INCROOT}/Player.hpp
    ${SRCROOT}/Controls.cpp
    ${INCROOT}/Controls.hpp
    ${SRCROOT}/Gamepad.cpp
    ${INCROOT}/Gamepad.hpp
    PARENT_SCOPE
)

SET(INCDIRS
    ${INCDIRS}
    ${INCROOT}
    PARENT_SCOPE
)
