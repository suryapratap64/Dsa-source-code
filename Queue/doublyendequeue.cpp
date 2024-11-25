#include <iostream>

using namespace std;
// input restrected queue
// output restrected queue
class dqueue
{
public:
    int *arr;
    int size;
    int front;
    int rear;
    dqueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    void pushfront(int data)
    {
        if (front == 0 && rear == size - 1)
        {
            cout << "q is full, cannot insert" << endl;
        }
        else if (front == -1)
        {
            front = rear = 0;
        }
        else if (front == 0 && rear != size - 1)
        {
            front = size - 1;
        }
        else
        {
            front--;
        }
        arr[front] = data;
    }
    void popfront()
    {
        if (front == 0 && rear == size - 1)
        {
            cout << "q is full cannot insert" << endl;
        }
        if (front == -1)
        {
            cout << "q si empty,can not pop" << endl;
            return;
        }
        else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }
    void poprear()
    {
        if (front == 0 && rear == size - 1)
        {
            cout << "q is full cannot insert" << endl;
        }
        if (front == -1)
        {
            cout << "q si empty,can not pop" << endl;
            return;
        }
        else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if (rear == 0)
        {
            rear = size - 1;
        }
        else
        {
            rear--;
        }
    }
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i]<<" ";
        }
    }
};
int main()
{

    dqueue dq(10);
    dq.pushfront(30);
    dq.pushfront(31);
    dq.pushfront(32);
    dq.pushfront(33);
    dq.pushfront(34);
    dq.pushfront(35);
    dq.pushfront(36);
    dq.pushfront(37);
    dq.print();

    return 0;
}