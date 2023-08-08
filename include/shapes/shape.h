#pragma once

#include <vector>
#include <iostream>

#include "shapes/point.h"
#include "shapes/color.h"

class Shape
{
public:
    Shape() : color(Color::DEFAULT)
    {

    }

    Shape(Color color) :  color(color)
    {

    }

    virtual ~Shape() = default;

    void AddPoint(const Point& point)
    {
        points.emplace_back(point);
    }

    void SetPoints(const std::vector<Point>& pts)
    {
        points.insert(points.end(), pts.begin(), pts.end());
    }

    virtual void draw() = 0;

protected:
    std::vector<Point> points;
    Color color;
};
