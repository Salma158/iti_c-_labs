#include "RectangLe.h"
#include "Shape.h"
#include "graphics.h"
#include <iostream>
using namespace std;
RectangLe::RectangLe(){}
RectangLe::RectangLe(int color,int p1x, int p1y, int p2x, int p2y) : Shape(color,p1x, p1y,p2x, p2y)
{
}

void RectangLe::draw()
{
    setcolor(color);
    rectangle(p1.getX(),p1.getY(),p2.getX(), p2.getY());

}

ostream & operator << (ostream &out, const RectangLe &rect)
{
    out << "color : " << rect.color << endl;
    out << "point 1 x : " << rect.p1.x << endl;
    out << "point 1 y : " << rect.p1.y << endl;
    out << "point 2 x : " << rect.p2.x << endl;
    out << "point 2 y : " << rect.p2.y << endl;
    return out;

}
istream & operator >> (istream &in,  RectangLe &rect)
{
    cout << "color : " << endl;
    in >> rect.color;
    cout << "point 1 x : " << endl;
    in >> rect.p1.x;
    cout << "point 1 y : " << endl;
    in >> rect.p1.y;
    cout << "point 2 x : " << endl;
    in >> rect.p2.x;
    cout << "point 2 y : " << endl;
    in >> rect.p2.y;
    return in;
}
