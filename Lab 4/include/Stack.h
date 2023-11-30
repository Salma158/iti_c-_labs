#ifndef STACK_H
#define STACK_H


class Stack
{
public:
    Stack();
    virtual ~Stack();
    Stack(int Size);
    int push(int n);
    int pop();
    void display();
    void operator = (const Stack & s);

private:
    int * arr;
    int top;
    int Size;
};

#endif // STACK_H
