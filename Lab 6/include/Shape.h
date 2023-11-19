#ifndef SHAPE_H
#define SHAPE_H
#include "Point.h"
class Shape
{
protected:
    int color;
    Point p1;
    Point p2;
public :
    Shape();
    Shape(int _color, int p1x, int p1y, int p2x=0, int p2y=0);
    void draw();
};


#endif // SHAPE_H
