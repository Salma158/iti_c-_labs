#include "Complex.h"
#include <iostream>
using namespace std;
void Complex::setReal(int r)
{
    real =r;
}
void Complex::setImaginary(int i)
{
    imaginary =i;
}
int Complex::getReal()
{
    return real;
}
int Complex::getImaginary()
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

Complex Complex::add(Complex x)
{
    Complex c;
    c.real = real + x.getReal();
    c.imaginary = imaginary + x.getImaginary();
    return c;
}

Complex Complex::sub(Complex x)
{
    Complex c;
    c.real = real - x.getReal();
    c.imaginary = imaginary - x.getImaginary();
    return c;
}

Complex addTwoComplex(Complex c1, Complex c2)
{
    int realSum = c1.getReal() + c2.getReal() ;
    int imageSum = c1.getImaginary() + c2.getImaginary();
    Complex c;
    c.setReal(realSum);
    c.setImaginary(imageSum);
    return c;
}

Complex subTwoComplex(Complex c1, Complex c2)
{
    int realSub = c1.getReal() - c2.getReal() ;
    int imageSub = c1.getImaginary() - c2.getImaginary();
    Complex c;
    c.setReal(realSub);
    c.setImaginary(imageSub);
    return c;
}

void printStandalone(Complex c){
    cout << c.getReal();
    if(c.getImaginary() > 0 ){
        cout << "+" << c.getImaginary() << "j";
    } else if(c.getImaginary() < 0){
        cout << c.getImaginary() << "j";
    }
}
