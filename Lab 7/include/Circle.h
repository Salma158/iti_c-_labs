#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
#include <iostream>
using namespace std;

class Circle : public Shape
{
    int radius;
public:
    Circle();
    Circle(int color ,int r, int x, int y);
    void draw();
    friend ostream& operator<<(ostream& os, const Circle& circle);
    friend istream& operator>>(istream& is, Circle& circle);
};

#endif // CIRCLE_H
