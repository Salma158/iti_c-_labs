#include "Circle.h"
#include "Shape.h"
#include "graphics.h"

Circle::Circle(){}
Circle::Circle(int color,int r, int x, int y) : Shape(color,x,y)
{
    radius = r;
}

void Circle::draw()
{
    setcolor(color);
    circle(p1.getX(),p1.getY(),radius);
}

ostream & operator << (ostream &out, const Circle &circle)
{
    out << "color : " << circle.color << endl;
    out << "center point x : " << circle.p1.x << endl;
    out << "center point y : " << circle.p1.y << endl;
    out << "radius : " << circle.radius << endl;
    return out;

}
istream & operator >> (istream &in,  Circle &circle)
{
    cout << "color : " << endl;
    in >> circle.color;
    cout << "center point x : " << endl;
    in >> circle.p1.x;
    cout << "center point y : " << endl;
    in >> circle.p1.y;
    cout << "radius : " << endl;
    in >> circle.radius;
    return in;
}
