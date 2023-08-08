cmake_minimum_required(VERSION 3.5)

project(Editor)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(editor
    include/core/document.h
    include/shapes/shape.h
    include/shapes/circle.h
    include/shapes/point.h
    include/shapes/rectangle.h
    include/shapes/color.h
    include/shapes/line.h
    include/shapes/triangle.h
    include/core/model.h
    include/core/observer.h
    include/core/view.h
    src/model.cpp
    src/main.cpp
)

target_include_directories(editor PRIVATE include)
