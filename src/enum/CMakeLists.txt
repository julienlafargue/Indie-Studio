set(INCROOT ${PROJECT_SOURCE_DIR}/src/enum)

set(SRC
    ${INCROOT}/gameEnum.hpp
    ${INCROOT}/shapeEnum.hpp
    ${INCROOT}/sceneEnum.hpp
    ${INCROOT}/buttonEnum.hpp
    )

add_library(enum INTERFACE ${SRC})

target_include_directories(enum INTERFACE ${INCROOT})