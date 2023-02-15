set(INCROOT ${PROJECT_SOURCE_DIR}/src/raylib_encapsulation/Shapes)
set(SRCROOT ${PROJECT_SOURCE_DIR}/src/raylib_encapsulation/Shapes)

set(SRC
    ${SRC}
    ${SRCROOT}/CircleShape.cpp
    ${SRCROOT}/LineShape.cpp
    ${SRCROOT}/PixelShape.cpp
    ${SRCROOT}/PolygonShape.cpp
    ${SRCROOT}/RectangleShape.cpp
    ${SRCROOT}/TriangleShape.cpp
    ${INCROOT}/CircleShape.hpp
    ${INCROOT}/LineShape.hpp
    ${INCROOT}/PixelShape.hpp
    ${INCROOT}/PolygonShape.hpp
    ${INCROOT}/TriangleShape.hpp
    ${INCROOT}/IShapes.hpp
    ${INCROOT}/RectangleShape.hpp
    PARENT_SCOPE
    )

SET(INCDIRS
    ${INCDIRS}
    ${INCROOT}
    PARENT_SCOPE
)