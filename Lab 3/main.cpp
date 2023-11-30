#include <iostream>
#include <Stack.h>
using namespace std;
void test(Stack & s);

int main()
{
    Stack c1(10);
    cout<<c1.push(5)<<endl;
    cout<<c1.push(6)<<endl;
    cout<<c1.push(7)<<endl;
    test(c1);
    cout<< c1.pop()<<endl;
    cout<< c1.pop()<<endl;
    cout<< c1.pop()<<endl;
    cout<< c1.push(7)<<endl;
    cout<< c1.pop()<<endl;
    return 0;
}

void test(Stack & s)
{
    s.pop();
    s.pop();
    s.pop();
}
