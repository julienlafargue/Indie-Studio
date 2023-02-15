set(INCROOT ${PROJECT_SOURCE_DIR}/src/scene/gameSettings)
set(SRCROOT ${PROJECT_SOURCE_DIR}/src/scene/gameSettings)

set(SRC
    ${SRC}
    ${SRCROOT}/GameSettings.cpp
    ${INCROOT}/GameSettings.hpp
    ${SRCROOT}/HowToPlayBox.cpp
    ${INCROOT}/HowToPlayBox.hpp
    PARENT_SCOPE
    )

SET(INCDIRS
    ${INCDIRS}
    ${INCROOT}
    PARENT_SCOPE
)