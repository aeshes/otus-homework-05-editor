#pragma once

#include "shapes/shape.h"

class Rectangle : public Shape
{
public:
    Rectangle(Point point, int width, int height, Color color = Color::DEFAULT)
        : Shape(color), width(width), height(height)
    {
        AddPoint(point);
    }

    void draw() override
    {
        std::cout << "Draw rectangle" << std::endl;
    }

private:
    int width;
    int height;
};
