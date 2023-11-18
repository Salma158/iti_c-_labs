#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
private:
    int real;
    int imaginary;

public:
    void setReal(int r);
    void setImaginary(int i);
    int getReal();
    int getImaginary();
    void printComplex();
    Complex add(Complex x);
    Complex sub(Complex x);
};

Complex addTwoComplex(Complex c1, Complex c2);
Complex subTwoComplex(Complex c1, Complex c2);
void printStandalone(Complex c);
#endif // COMPLEX_H
