module;

#include <iostream>

export module shapes.shapes;


export enum class Color
{
    DEFAULT,
    RED,
    GREEN,
    BLUE
};

export class Shape
{
public:
    Shape() : color(Color::DEFAULT)
    {

    }

    Shape(Color color) :  color(color)
    {

    }

    virtual ~Shape() = default;

    virtual void draw()
    {

    }

protected:
    Color color;
};

export class Circle : public Shape
{
public:
    Circle(int x, int y, int radius, Color color = Color::DEFAULT)
        : Shape(color), radius(radius)
    {

    }

    void draw() override
    {
        std::cout << "Draw circle" << std::endl;
    }

private:
    int radius;
};

export class Rectangle : public Shape
{
public:
    Rectangle(int x, int y, int width, int height, Color color = Color::DEFAULT)
        : Shape(color), width(width), height(height)
    {

    }

    void draw() override
    {
        std::cout << "Draw rectangle" << std::endl;
    }

private:
    int width;
    int height;
};


export class Line : public Shape
{
public:
    Line(int x1, int y1, int x2, int y2, Color color = Color::DEFAULT)
        : Shape(color)
    {

    }

    void draw() override
    {
        std::cout << "Draw line" << std::endl;
    }
};
