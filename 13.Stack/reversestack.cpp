#include<iostream>
#include<stack>
using namespace std;
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
void reversestack(stack<int>&s){ 
    //base case
    if(s.empty()){
        return ;
    }

    //nahi pata

    int target=s.top();
    s.pop();
    //reverse stack
    reversestack(s);
    //insert at bottom
    insertatbottom(s,target);


}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
     reversestack(s);
     cout<<"printing"<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
   
    cout<<endl;

}