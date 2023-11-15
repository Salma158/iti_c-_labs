#include <iostream>
#include <graphics.h>
#include <string.h>
using namespace std;

class Point
{
public:
    int x;
    int y;

    Point() : x(0), y(0) {}
    Point(int _x, int _y) : x(_x), y(_y) {}



    void set_x(int _x)
    {
        x = _x;
    }

    void set_y(int _y)
    {
        y = _y;
    }
    int get_x()
    {
        return x;
    }

    int get_y()
    {
        return y;
    }
    void set_point(int _x, int _y)
    {
        x = _x;
        y = _y;
    }

    void print()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }

};

class shape
{
protected:
    int color;
    Point p1;
    Point p2;
public :
    shape() {};
    shape(int _color, int p1x, int p1y, int p2x=0, int p2y=0) : p1(p1x, p1y), p2(p2x, p2y) {
        color = _color;
    }

    virtual void draw()
    {
        cout << "i will draw" << endl;
    }

};



class Line : public shape
{
public:
    Line(){}
    Line(int color, int p1x, int p1y, int p2x, int p2y) : shape(color,p1x, p1y,p2x, p2y) {}

    void draw()
    {
        setcolor(color);
        line(p1.get_x(),p1.get_y(),p2.get_x(),p2.get_y());
    }
};

class Circle : public shape
{
    int radius;

public:
    Circle(){}
    Circle(int color ,int r, int x, int y) : shape(color,x,y)
    {
        radius = r;
    }

    void draw()
    {
        setcolor(color);
        circle(p1.get_x(),p1.get_y(),radius);
    }
};

class Rectanglee : public shape
{
public:
    Rectanglee() {}
    Rectanglee(int color,int p1x, int p1y, int p2x, int p2y) : shape(color,p1x, p1y,p2x, p2y)
    {
    }
    void draw()
    {
        setcolor(color);
        rectangle(p1.get_x(),p1.get_y(),p2.get_x(), p2.get_y());
    }

};
int main()
{
    int x;
    cout<< "how many shapes do you want to draw ?" <<  endl;
    cin >> x ;
    shape * shapes[x];

    for(int i=0; i<x; i++)
    {
        int x;
        cout<< "please choose shape" << " [" << i << "] : \n(1) for line\n(2) for circle\n(3) for rectangle \n"  <<  endl;
        cin >> x;
        if (x==1)
        {
            int c,x,y,z,l;
            cout << "color : " << endl;
            cin >> c;
            cout << "point 1 x : " << endl;
            cin >> x;
            cout << "point 1 y : " << endl;
            cin >> y;
            cout << "point 2 x : " << endl;
            cin >> z;
            cout << "point 2 y : " << endl;
            cin >> l;
            shapes[i]= new Line(c,x,y,z,l);
        }
        else if (x==2)
        {
            int c,x,y;
            int radius;
            cout << "color : " << endl;
            cin >> c;
            cout << "point x : " << endl;
            cin >> x;
            cout << "point y : " << endl;
            cin >> y;
            cout << "radius : " << endl;
            cin >> radius;
            shapes[i]= new Circle(c,radius,x,y);
        }
        else if(x==3)
        {

            int c,x,y,z,l;
            cout << "color : " << endl;
            cin >> c;
            cout << "point 1 x : " << endl;
            cin >> x;
            cout << "point 1 y : " << endl;
            cin >> y;
            cout << "point 2 x : " << endl;
            cin >> z;
            cout << "point 2 y : " << endl;
            cin >> l;
            shapes[i]= new Rectanglee(c,x,y,z,l);
        }
    }
    initwindow(300,400,"graph");
    for(int i=0; i<x; i++)
    {
        shapes[i]->draw();
    }
    getch();
    closegraph();
    return 0;
}
