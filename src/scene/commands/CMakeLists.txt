set(INCROOT ${PROJECT_SOURCE_DIR}/src/scene/commands)
set(SRCROOT ${PROJECT_SOURCE_DIR}/src/scene/commands)

set(SRC
    ${SRC}
    ${SRCROOT}/CommandsKeyboard.cpp
    ${INCROOT}/CommandsKeyboard.hpp
    ${SRCROOT}/CommandsController.cpp
    ${INCROOT}/CommandsController.hpp
    ${SRCROOT}/FoxBoxKeyboard.cpp
    ${INCROOT}/FoxBoxKeyboard.hpp
    PARENT_SCOPE
    )

SET(INCDIRS
    ${INCDIRS}
    ${INCROOT}
    PARENT_SCOPE
)