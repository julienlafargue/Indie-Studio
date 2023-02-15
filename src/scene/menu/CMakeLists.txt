set(INCROOT ${PROJECT_SOURCE_DIR}/src/scene/menu)
set(SRCROOT ${PROJECT_SOURCE_DIR}/src/scene/menu)

set(SRC
    ${SRC}
    ${SRCROOT}/Menu.cpp
    ${INCROOT}/Menu.hpp
    ${SRCROOT}/Parallax.cpp
    ${INCROOT}/Parallax.hpp
    ${SRCROOT}/MovingBackground.cpp
    ${INCROOT}/MovingBackground.hpp
    PARENT_SCOPE
    )

SET(INCDIRS
    ${INCDIRS}
    ${INCROOT}
    PARENT_SCOPE
)