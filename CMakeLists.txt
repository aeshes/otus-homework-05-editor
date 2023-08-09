cmake_minimum_required(VERSION 3.5)

set(PATCH_VERSION "1" CACHE INTERNAL "Patch version")
set(PROJECT_VERSION 0.0.${PATCH_VERSION})
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Editor VERSION ${PROJECT_VERSION})

set(CPACK_GENERATOR DEB)
set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")
set(CPACK_PACKAGE_CONTACT example@example.ru)

include(CPackComponent)
include(InstallRequiredSystemLibraries)
include(CPack)

add_executable(editor
    include/core/document.h
    include/shapes/shape.h
    include/shapes/circle.h
    include/shapes/point.h
    include/shapes/rectangle.h
    include/shapes/color.h
    include/shapes/line.h
    include/shapes/triangle.h
    include/shapes/shapes.h
    include/core/model.h
    include/core/observer.h
    include/core/view.h
    include/core/controller.h
    src/model.cpp
    src/view.cpp
    src/controller.cpp
    src/main.cpp
)

target_include_directories(editor PRIVATE include)

install(TARGETS editor RUNTIME DESTINATION bin)

find_package(Doxygen)

if (DOXYGEN_FOUND)
    set(DOXYGEN_IN ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile)

    add_custom_target(doxygen
        COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_IN}
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    )
endif()
