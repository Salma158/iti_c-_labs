#include "Line.h"
#include "Shape.h"
#include "graphics.h"
#include <iostream>
using namespace std;

Line::Line(){};
Line::Line(int color, int p1x, int p1y, int p2x, int p2y) : Shape(color,p1x, p1y,p2x, p2y)
{
}

void Line::draw()
{
    setcolor(color);
    line(p1.getX(),p1.getY(),p2.getX(),p2.getY());
}

ostream & operator << (ostream &out, const Line &line)
{
    out << "color : " << line.color << endl;
    out << "point 1 x : " << line.p1.x << endl;
    out << "point 1 y : " << line.p1.y << endl;
    out << "point 2 x : " << line.p2.x << endl;
    out << "point 2 y : " << line.p2.y << endl;
    return out;

}
istream & operator >> (istream &in,  Line &line)
{
    cout << "color : " << endl;
    in >> line.color;
    cout << "point 1 x : " << endl;
    in >> line.p1.x;
    cout << "point 1 y : " << endl;
    in >> line.p1.y;
    cout << "point 2 x : " << endl;
    in >> line.p2.x;
    cout << "point 2 y : " << endl;
    in >> line.p2.y;
    return in;
}
