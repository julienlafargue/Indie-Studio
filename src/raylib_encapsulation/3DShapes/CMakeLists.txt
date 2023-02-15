set(INCROOT ${PROJECT_SOURCE_DIR}/src/raylib_encapsulation/3DShapes)
set(SRCROOT ${PROJECT_SOURCE_DIR}/src/raylib_encapsulation/3DShapes)

set(SRC
    ${SRC}
    ${SRCROOT}/Circle3D.cpp
    ${INCROOT}/Circle3D.hpp
    ${SRCROOT}/MeshCubicmap.cpp
    ${INCROOT}/MeshCubicmap.hpp
    ${SRCROOT}/Cube.cpp
    ${INCROOT}/Cube.hpp
    ${SRCROOT}/Cylinder.cpp
    ${INCROOT}/Cylinder.hpp
    ${SRCROOT}/Line3D.cpp
    ${INCROOT}/Line3D.hpp
    ${SRCROOT}/Model3D.cpp
    ${INCROOT}/Model3D.hpp
    ${SRCROOT}/Plane.cpp
    ${INCROOT}/Plane.hpp
    ${SRCROOT}/Point3D.cpp
    ${INCROOT}/Point3D.hpp
    ${SRCROOT}/Sphere.cpp
    ${INCROOT}/Sphere.hpp
    ${SRCROOT}/Triangle3D.cpp
    ${INCROOT}/Triangle3D.hpp
    ${SRCROOT}/Collider.cpp
    ${INCROOT}/Collider.hpp
    PARENT_SCOPE
)

SET(INCDIRS
    ${INCDIRS}
    ${INCROOT}
    PARENT_SCOPE
)