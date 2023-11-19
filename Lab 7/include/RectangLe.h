#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"
#include <iostream>
using namespace std;
class RectangLe : public Shape
{
public:
    RectangLe();
    RectangLe(int color,int p1x, int p1y, int p2x, int p2y);
    void draw();
    friend ostream& operator<<(ostream& os, const RectangLe& rect);
    friend istream& operator>>(istream& is, RectangLe& rect);
};

#endif // RECTANGLE_H
