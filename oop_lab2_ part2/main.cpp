#include <iostream>

using namespace std;

class Queue
{
private:
    int * arr;
    int Size;

    int frontt;
    int backk;
public:
    Queue(int Size)
    {
        this-> Size = Size;
        arr = new int[this->Size] {0};
        this->frontt = -1;
        this->backk = -1;

    }

    void dequeue()
    {

        if (frontt == - 1 )
        {
            cout << "empty";
        }
        else
        {
            frontt++;;
            cout << arr[frontt];
        }

    }

    void enqueue(int x)
    {
        if (backk == Size - 1){
        cout << "full";};
        if (frontt == - 1){
            frontt = 0;}

        backk++;
        arr[backk] = x;
        cout << arr[backk];

    }

    void print()
    {
        if (frontt == - 1)
            cout<<"empty";
        else
        {
            for (int i = frontt; i <= backk; i++){
                cout<<arr[i]<<" ";
            }
        }
    }
    ~Queue()
    {
        delete[] arr;
    }



};

int main()
{
    Queue q(4);
    /*q.enqueue(3);
    q.enqueue(2);
    q.enqueue(1);
    q.dequeue();
    q.print();*/

q.dequeue();
q.enqueue(5);
q.enqueue(7);
q.enqueue(10);
q.dequeue();
q.dequeue();
q.enqueue(11);
q.dequeue();
q.dequeue();
q.dequeue();



    return 0;


}
