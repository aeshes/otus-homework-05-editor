#pragma once

#include "shapes/shape.h"

class Circle : public Shape
{
public:
    Circle(Point center, int radius, Color color = Color::DEFAULT)
        : Shape(color), radius(radius)
    {
        AddPoint(center);
    }

    void draw() override
    {
        std::cout << "Draw circle" << std::endl;
    }

private:
    int radius;
};
