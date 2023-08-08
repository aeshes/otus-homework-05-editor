#pragma once

#include "shapes/shape.h"

class Line : public Shape
{
public:
    Line(Point begin, Point end, Color color = Color::DEFAULT)
        : Shape(color)
    {
        AddPoint(begin);
        AddPoint(end);
    }

    void draw() override
    {
        std::cout << "Draw line" << std::endl;
    }
};
