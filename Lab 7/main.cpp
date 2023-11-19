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
    vector<Shape *> shapes;
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
            shapes.push_back(ptr);
        }
        else if (choice==2)
        {
            Circle * ptr = new Circle();
            cin >> *ptr;
            shapes.push_back(ptr);
        }
        else if(choice==3)
        {
            RectangLe * ptr = new RectangLe();
            cin >> *ptr;
            shapes.push_back(ptr);
        }
        i++;
        }
        cout << "invalid input : please enter 1 , 2 or 3" << endl;
    }



    initwindow(300,400,"graph");
    for (int i = 0; i < shapes.size(); i++) {
        shapes[i]->draw();
    }
    getch();
    closegraph();
    return 0;
}
