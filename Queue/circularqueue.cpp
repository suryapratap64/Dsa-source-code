#include <iostream>

using namespace std;
// input restrected queue
//output restrected queue
class cirqueue
{
public:
    int *arr;
    int size;
    int front;
    int rear;
    cirqueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }
    void push(int data)
    {
        // queeu is full

        // circula nature

        // normal flow
        if (front == 0 && rear == size - 1)
        {
            cout << "q is full, cannot insert" << endl;
        }
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = data;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = data;
        }
        else
        {
            rear++;
            arr[rear] = data;
        }
    }
    void pop()
    {
        // empty check
        // single element//circular
        // normal flow
        //todo: add one new more condition in the queue is full
        if(front==0 &&rear==size-1){
            cout<<"q is full cannot insert"<<endl; 
        }
        if (front == -1)
        {
            cout << "q si empty,can not pop" << endl;
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
}

;
int main()
{

    return 0;
}