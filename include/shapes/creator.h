#pragma once

#include <memory>

#include "shapes/shapes.h"

class ShapesCreator
{
public:
    static std::shared_ptr<Shape> createCircle(int x, int y, int radius);
    static std::shared_ptr<Shape> createRectangle(int x, int y, int width, int height);
    static std::shared_ptr<Shape> createLine(int x1, int y1, int x2, int y2);
};

std::shared_ptr<Shape> ShapesCreator::createCircle(int x, int y, int radius)
{
    return std::make_shared<Circle>(Point(x, y), radius);
}

std::shared_ptr<Shape> ShapesCreator::createRectangle(int x, int y, int width, int height)
{
    return std::make_shared<Rectangle>(Point(x, y), width, height);
}

std::shared_ptr<Shape> ShapesCreator::createLine(int x1, int y1, int x2, int y2)
{
    return std::make_shared<Line>(Point(x1, y1), Point(x2, y2));
}
