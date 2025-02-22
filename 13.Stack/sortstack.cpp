#include <iostream>
#include <stack>

using namespace std;
void insertesorted(stack<int>& s, int target)
{
    // base condition
    if (s.empty())
    {
        s.push(target);
        return;
    }
    if (s.top() >= target)
    {
        s.push(target);
        return;
    }
    int topelement=s.top();
    s.pop();
    insertesorted(s,target);
    //bt
    s.push(topelement);

}
void sortstack(stack<int>&s){
    //base case
    if(s.empty()){
        return;
    }
    int topelement=s.top();
    s.pop();
    sortstack(s);
    insertesorted(s,topelement);
}
int main()
{
   stack<int>s;
   s.push(34);
   s.push(35);
   s.push(36);
   s.push(37);
   s.push(38);
   
   sortstack(s);
   cout<<"printing"<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }


    cout<<endl;

return 0;
}


 
