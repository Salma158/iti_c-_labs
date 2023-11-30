#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex();
    Complex(int r,int i);
    void setReal(int r);
    void setImaginary(int i);
    int getReal() const;
    int getImaginary() const;
    void printComplex();
    Complex operator + (const Complex & c);
    Complex operator += (const Complex & c);
    Complex operator - (const Complex & c);
    Complex operator + (int num);
    Complex operator - (int num);
    int operator == (const Complex & c);
    Complex operator ++();
    Complex operator ++(int);
    operator float();
    int operator [] (char * str);
    int operator[](int index);
    friend ostream& operator << (ostream &out, const Complex &c);
    friend istream& operator >> (istream &in,  Complex &c);
};

Complex operator + (int n, Complex & c);
Complex operator - (int n, Complex & c);

#endif // COMPLEX_H
