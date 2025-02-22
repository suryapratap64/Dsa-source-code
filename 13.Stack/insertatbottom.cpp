#include <iostream>
#include <stack>
using namespace std;
// void solve(stack<int>s,int target){
//     //basse case
//     if(s.empty()){
//         s.push(target);
//         return;
//     }
//     int topelement=s.top();
//     s.pop();
//     solve(s,target);
//     s.push(topelement);
// }
void insertatbottom(stack<int>&s,int target){
   
    if(s.empty()){
       s.push(target);
        return;

    }
    int topelement=s.top();
s.pop();
insertatbottom(s,target);
s.push(topelement);
}
int main()
{
    stack<int> s;
    int target;
    s.push(6);
    s.push(8);
    s.push(34);
    s.push(90);
    s.push(62);
    s.push(9);
    s.push(12);
    insertatbottom(s,target);
    cout<<"printing"<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

    return 0;
}