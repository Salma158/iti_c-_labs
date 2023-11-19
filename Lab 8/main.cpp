#include <iostream>

using namespace std;

template <class T>
class Stack
{
public:
    Stack()
    {
        items = new T[10];
        top = -1;
        Size = 10;
    }

    Stack(int _Size)
    {
        Size = _Size;
        items = new T[Size];
        top = -1;
    }

    void add(T data)
    {
        if (top == Size - 1)
        {
            extend();
        }
        top++;
        items[top] = data;
    }

    void extend()
    {
        T *temp = new T[Size * 2];

        for (int i = 0; i <= top; ++i)
        {
            temp[i] = items[i];
        }
        delete[] items;
        items = temp;
        Size *= 2;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Sorry, it is already empty" << endl;
        }
        top--;
    }

    int getSize()
    {
        return Size;
    }

    void display()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << items[i] << endl;
        }
    }

    ~Stack()
    {
        delete[] items;
    }

private:
    T *items;
    int Size;
    int top;
};

int main()
{
    Stack<int> s(3);
    s.add(1);
    s.add(5);
    s.add(6);
    s.add(8);
    s.display();

    return 0;
}
