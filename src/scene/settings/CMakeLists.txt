set(INCROOT ${PROJECT_SOURCE_DIR}/src/scene/settings)
set(SRCROOT ${PROJECT_SOURCE_DIR}/src/scene/settings)

set(SRC
    ${SRC}
    ${SRCROOT}/Settings.cpp
    ${SRCROOT}/ScrollableValue.cpp
    ${INCROOT}/Settings.hpp
    ${INCROOT}/ScrollableValue.hpp
    PARENT_SCOPE
    )

SET(INCDIRS
    ${INCDIRS}
    ${INCROOT}
    PARENT_SCOPE
)