#include "Complex.h"
#include <iostream>
#include <string.h>
using namespace std;

Complex::Complex(int r,int i)
{
    real = r;
    imaginary =i;
}
Complex::Complex()
{
    real = 0;
    imaginary =0;
}

void Complex::setReal(int r)
{
    real =r;
}
void Complex::setImaginary(int i)
{
    imaginary =i;
}
int Complex::getReal() const
{
    return real;
}
int Complex::getImaginary() const
{
    return imaginary;
}
void Complex::printComplex()
{
    cout << real;
    if(imaginary > 0 )
    {
        cout << "+" << imaginary << "j";
    }
    else if(imaginary < 0)
    {
        cout << imaginary << "j";
    }
}


Complex Complex::operator + (const Complex & c)
{
    Complex result(real+c.getReal(), imaginary+ c.getImaginary());
    return result;
}

Complex Complex::operator += (const Complex & c)
{
    real = real+c.getReal();
    imaginary = imaginary + c.getImaginary();
    return *this;
}

Complex Complex::operator - (const Complex & c)
{
    Complex result(real-c.getReal(), imaginary- c.getImaginary());
    return result;
}

Complex Complex::operator + (int num)
{
    Complex result(real+num, imaginary+num);
    return result;
}
Complex Complex::operator - (int num)
{
    Complex result(real-num, imaginary-num);
    return result;
}
int Complex::operator == (const Complex & c)
{
    return (real == c.getReal() && imaginary == c.getImaginary());
}
Complex Complex::operator ++()
{
    real = real +1;
    return *this;
}
Complex Complex::operator ++(int)
{
    Complex temp = *this;
    real = real + 1;
    return temp;
}
 Complex::operator float()
{
    return  real;
}

int Complex::operator [] (char * str)
{
    if (strcmp(str, "real") == 0)
    {
        return real;
    }
    else if (strcmp(str, "imaginary") == 0)
    {
        return imaginary;
    }
    return 0;
}

int Complex::operator[](int index)
{
    if (index == 0)
    {
        return real;
    }
    else if (index == 1)
    {
        return imaginary;
    }
}




Complex operator + (int n, Complex & c)
{
    Complex res;
    res.setReal(n+ c.getReal());
    res.setImaginary(c.getImaginary());
    return res;
}

Complex operator - (int n, Complex & c)
{
    Complex res;
    res.setReal(n- c.getReal());
    res.setImaginary(c.getImaginary());
    return res;
}

ostream & operator << (ostream &out, const Complex &c)
{
    out << c.real;
    out << "+";
    out << c.imaginary;
    out << "j";
    return out;
}

istream & operator >> (istream &in,  Complex &c)
{
    cout << "real :  ";
    in >> c.real;
    cout << "imaginary : ";
    in >> c.imaginary;
    return in;
}

