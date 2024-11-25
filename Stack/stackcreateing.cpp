#include <iostream>
using namespace std;
class stack
{
public:
    int *arr;
    int top;
    int size;
    stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }
    // function
    void push(int data)
    {
        if (size - top > 1)
        {
            // space availalbe
            // insert
            top++;
            arr[top] = data;
        }
        else
        {
            // space not available
            cout << "stack overflow" << endl;
        }
    }
    void pop()
    {

        if (top == -1)
        {
            // stack is empty
            cout << "stack underflow,can not delete element" << endl;
        }
        else
        {

            // stack is not empty
            top--;
        }
    }
    int gettop()
    {
        if (top == -1)
        {
            cout << "no element in the stack" << endl;
        }
        else
        {
            return arr[top];
        }
    }
    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    stack st(10);
    //insertion
    st.push(14);
    st.push(16);
    st.push(18);
    st.push(109);
    st.push(13);
    st.push(15);
    while(!st.isempty()){
        cout<<st.gettop()<<" ";
        st.pop();
    }
    cout<<"size of stack"<<st.size()<<endl;

    return 0;
}