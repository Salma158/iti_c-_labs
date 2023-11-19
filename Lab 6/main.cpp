#include <iostream>
#include <graphics.h>
#include <vector>
#include <Line.h>
#include <Circle.h>
#include <RectangLe.h>
#include <Point.h>
#include <Shape.h>
using namespace std;

int main()
{
    int x;
    cout<< "how many shapes do you want to draw ?" <<  endl;
    cin >> x ;

    vector<Line *> lines;
    vector<Circle *> circles;
    vector<RectangLe *> rectangles;
    int i=0;
    while(i<x)
    {
        int choice;
        cout<< "please choose shape" << " [" << i <<
        "] :\n(1) for line\n(2) for circle\n(3) for rectangle \n"  <<  endl;
        cin >> choice;
        if(choice>=1 && choice<=3){
        if (choice==1)
        {
            Line * ptr = new Line();
            cin >> *ptr;

            lines.push_back(ptr);
        }
        else if (choice==2)
        {
            Circle * ptr = new Circle();
            cin >> *ptr;
            circles.push_back(ptr);
        }
        else if(choice==3)
        {
            RectangLe * ptr = new RectangLe();
            cin >> *ptr;
            rectangles.push_back(ptr);
        }
        i++;
        }
        cout << "please enter 1 , 2 or 3" << endl;
    }



    initwindow(300,400,"graph");
    for (int i = 0; i < lines.size(); i++) {
        lines[i]->draw();
    }
    for (int i = 0; i < circles.size(); i++) {
        circles[i]->draw();
    }
    for (int i = 0; i < rectangles.size(); i++) {
        rectangles[i]->draw();
    }
    getch();
    closegraph();
    return 0;
}
