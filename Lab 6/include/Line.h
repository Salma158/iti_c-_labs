#ifndef LINE_H
#define LINE_H
#include "Shape.h"
#include <iostream>
using namespace std;

class Line : public Shape
{
public:
    Line();
    Line(int color, int p1x, int p1y, int p2x, int p2y);
    void draw();
    friend ostream& operator<<(ostream& os, const Line& line);
    friend istream& operator>>(istream& is, Line& line);
};

#endif // LINE_H
