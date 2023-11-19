#include "Point.h"
#include <iostream>
using namespace std;
Point::Point()
{
    x =0;
    y =0;
}

Point::Point(int _x, int _y)
{
    this->x =_x;
    this->y =_y;
}

void Point::setX(int _x)
{
    x = _x;
}

void Point::setY(int _y)
{
    y = _y;
}
int Point::getX()
{
    return x;
}

int Point::getY()
{
    return y;
}

void Point::print()
{
    cout << "(" << x << "," << y << ")" << endl;
}
