#include <iostream>
#include <Complex.h>
#include <Stack.h>
using namespace std;

int main()
{
    cout << " testing c + c" << endl;
    Complex c6(1,2);
    Complex c7(1,2);
    Complex c8;
    c8 = c6 + c7;
    c8.printComplex();
    cout << " testing c += c" << endl;
    Complex c9(1,2);
    Complex c10(1,2);
    c9 += c10;
    c9.printComplex();
    cout << " testing c - c" << endl;
    Complex c11(5,6);
    Complex c12(1,2);
    Complex c13;
    c13 = c11 - c12;
    c13.printComplex();
    cout << "testing c + 3" << endl;
    Complex c14(5,6);
    Complex c15;
    c15 = c14 + 3 ;
    c15.printComplex();
    cout << "testing 3 + c" << endl;
    c15= 5 + (c14);
    c15.printComplex();
    cout << "testing 3 - c" << endl;
    c15= 3 - (c14);
    c15.printComplex();
    cout << "testing c == c" << endl;
    Complex c16(5,6);
    cout << (c14==c16);
    cout << "prefix ++c" << endl;
    ++c16;
    c16.printComplex();
    cout << "prefix c++" << endl;
    Complex c17(3,2);
    c17++;
    c17.printComplex();
    cout << "testing float" << endl;
    cout <<(float)c17;
    cout << "testing []" << endl;
    c17[1];
    cout << "testing cin and cout " << endl;
    Complex c18;
    cin >> c18;
    cout << c18 << endl;
    Complex c19(2,9);
    cout << c19 << endl;
    cout << c19["real"]; << endl;
    //--------------------------------------------
    Stack s(3);
    s.push(10);
    s.push(20);
    Stack s2;
    s2=s;
    s2.display();
    return 0;
}
