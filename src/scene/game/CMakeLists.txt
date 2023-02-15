set(INCROOT ${PROJECT_SOURCE_DIR}/src/scene/game)
set(SRCROOT ${PROJECT_SOURCE_DIR}/src/scene/game)

set(SRC
    ${SRC}
    ${SRCROOT}/Game.cpp
    ${INCROOT}/Game.hpp
    ${SRCROOT}/FoxBox.cpp
    ${INCROOT}/FoxBox.hpp
    ${SRCROOT}/Hud.cpp
    ${INCROOT}/Hud.hpp
    ${SRCROOT}/TextWithValue.cpp
    ${INCROOT}/TextWithValue.hpp
    ${SRCROOT}/WinMenu.cpp
    ${INCROOT}/WinMenu.hpp
    ${SRCROOT}/Pause.cpp
    ${INCROOT}/Pause.hpp
    PARENT_SCOPE
    )

SET(INCDIRS
    ${INCDIRS}
    ${INCROOT}
    PARENT_SCOPE
)