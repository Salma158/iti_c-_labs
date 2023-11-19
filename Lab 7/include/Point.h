#ifndef POINT_H
#define POINT_H


class Point
{
public:
    int x;
    int y;

    Point();
    Point(int _x, int _y);
    void setX(int _x);
    void setY(int _y);
    int getX();
    int getY();
    void print();
};

#endif // POINT_H
