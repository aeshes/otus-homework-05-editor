#pragma once

class Point
{
public:
    Point(int x, int y)
        : x(x), y(y)
    {

    }

    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }

private:
    int x;
    int y;
};
