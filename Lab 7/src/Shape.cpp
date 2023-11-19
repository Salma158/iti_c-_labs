#include "Shape.h"
#include "Point.h"
#include <iostream>
using namespace std;
Shape::Shape(){}
Shape::Shape(int _color, int p1x, int p1y, int p2x, int p2y) : p1(p1x, p1y), p2(p2x, p2y) {
    color = _color;
}
void Shape::draw() {
    cout << "I will draw" << endl;
}
