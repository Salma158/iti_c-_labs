#include <iostream>
#include "Complex.h"
#include "swap.h"
using namespace std;

int main()
{
    // testing class member functions
    Complex c1;
    c1.setReal(3);
    c1.setImaginary(4);
    c1.printComplex();
    cout << endl;
    //--------------------
    Complex c2;
    c2.setReal(1);
    c2.setImaginary(1);
    //--------------------
    Complex c3;
    c3 = c2.add(c1);
    c3.printComplex();
    cout << endl;
    //--------------------
    Complex c6;
    c6 = c2.sub(c1);
    c6.printComplex();
    cout << endl;

    // testing standalone functions
    Complex c4;
    c4 = addTwoComplex(c1,c2);
    c4.printComplex();
    cout << endl;
    //--------------------
    Complex c5;
    c5 = subTwoComplex(c1,c2);
    c5.printComplex();
    cout << endl;
    //--------------------
    printStandalone(c5);
    cout << endl;

    // testing swapping functions
    int x = 3;
    int y = 4;
    cout << "before " << x << " " << y << "\n";
    swap1(x,y);
    cout << "after " << x << " " <<y << "\n";
    //---------------------
    cout << "before " << x << " " << y << "\n";
    swap2(&x,&y);
    cout << "after " << x << " " <<y << "\n";
    //---------------------
    cout << "before " << x << " " << y << "\n";
    swap3(x,y);
    cout << "after " << x << " " <<y << "\n";

    return 0;
}
