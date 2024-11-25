#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    //size
    cout<<"size of the stack:"<<q.size();
    q.pop();
       cout<<"size of the stack:"<<q.size();
       if(q.empty()){
        cout<<"q is empty"<<endl;
       }
       else{
        cout<<"q is not empty"<<endl;
       }
cout<<"front element"<<q.front()<<endl;

    return 0;
}