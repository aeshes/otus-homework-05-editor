#pragma once

#include "shapes/shape.h"

class Triangle : public Shape
{
public:
    Triangle(Point a, Point b, Point c, Color color = Color::DEFAULT)
        : Shape(color)
    {
        AddPoint(a);
        AddPoint(b);
        AddPoint(c);
    }

    void draw() override
    {
        std::cout << "Draw triangle" << std::endl;
    }
};
