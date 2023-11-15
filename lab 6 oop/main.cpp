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
    Point p1;
    Point p2;
public :
    shape() {};
    shape(int p1x, int p1y, int p2x=0, int p2y=0) : p1(p1x, p1y), p2(p2x, p2y) {}

    virtual void draw()
    {
        cout << "i will draw" << endl;
    }
     friend istream & operator >> (istream &in,  shape &s);

};



class Line : public shape
{
public:
    Line(){}
    Line(int p1x, int p1y, int p2x, int p2y) : shape(p1x, p1y,p2x, p2y) {}

    void draw()
    {
        setcolor(GREEN);
        line(p1.get_x(),p1.get_y(),p2.get_x(),p2.get_y());
    }
};

class Circle : public shape
{
    int radius;

public:
    Circle(){}
    Circle(int r, int x, int y) : shape(x,y)
    {
        radius = r;
    }

    void draw()
    {
        setcolor(YELLOW);
        circle(p1.get_x(),p1.get_y(),radius);
    }
    friend istream & operator >> (istream &in,  Circle &c);
};

class Rectanglee : public shape
{
public:
    Rectanglee() {}
    Rectanglee(int p1x, int p1y, int p2x, int p2y) : shape(p1x, p1y,p2x, p2y)
    {
    }
    void draw()
    {
        setcolor(RED);
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
        char str[100];
        cout<< "please enter shape" << " [" << i <<"]" <<  endl;
        cin >> str;
        if (strcmp(str, "line")==0)
        {
            Line *linee = new Line;
            cin >> *linee;
            shapes[i]= linee;
        }
        else if (strcmp(str, "circle")==0)
        {
            Circle *circle = new Circle;
            cin >> *circle;
            shapes[i]= circle;
        }
        else if(strcmp(str, "rectangle")==0)
        {
            Rectanglee *rec = new Rectanglee;
            cin >> *rec;
            shapes[i]= rec;
        }
    }
    initwindow(300,400,"graph");
    for(int i=0; i<x; i++)
    {
        cout << "Shape " << i << ": ";
        shapes[i]->draw();
    }
    getch();
    closegraph();
    return 0;
}

istream & operator >> (istream &in,  shape &s)
{
    cout << "point 1 , x coordinate :  ";
    in >> s.p1.x;
    cout << "point 1 , y coordinate : ";
    in >> s.p1.y;
    cout << "point 2 , x coordinate :  ";
    in >> s.p2.x;
    cout << "point 2 , y coordinate : ";
    in >> s.p2.y;
    return in;
}
 istream & operator >> (istream &in,  Circle &c){
    cout << "circle radius :  ";
    in >> c.radius;
    cout << "point : x coordinate : ";
    in >> c.p1.x;
    cout << "point : y coordinate :  ";
    in >> c.p1.y;
    return in;
}
