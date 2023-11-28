#ifndef COMPLEX_H
#define COMPLEX_H



class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex(int r,int i);
    Complex();
    void setReal(int r);
    void setImaginary(int i);
    int getReal() const;
    int getImaginary()const;
    void printComplex();


#endif // COMPLEX_H
