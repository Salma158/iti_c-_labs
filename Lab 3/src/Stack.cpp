#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack()
{
    this-> Size = 0;
    top= 0;
    arr = new int[10] {0};
}


Stack::Stack(int Size)
{
    this-> Size = Size;
    top= -1;
    arr = new int[this->Size] {0};
}

//deep copy constructor
/*
Stack::Stack(Stack & s){
    this-> Size = s.Size;
    this-> top= s.top;
    arr = new int[s.Size];
    for(int i=0; i<=s.top; i++){
        arr[i] = s.arr[i];
    }
}*/

//shallow copy constructor (shallow)
Stack::Stack(Stack &s)
{
    this-> Size = s.Size;
    this-> top= s.top;
    arr = s.arr;
}


int Stack::push(int n)
{
    if(top < Size-1)
    {
        top++;
        arr[top]= n;
        return n;
    }
    else
    {
        return -1;
    }
}

int Stack::pop()
{
    if (top!= -1)
    {
        top--;
        return arr[top+1];
    }
    else
    {
        return -1;
    }
    arr[top]=-1;
}

Stack::~Stack()
{
    delete[] arr;
}

void Stack::display()
{
    if (top == -1)
    {
        cout << "sorry";
    }
    for(int i=0; i<=top; i++)
    {
        cout << arr[i] <<" ";
    }
}

