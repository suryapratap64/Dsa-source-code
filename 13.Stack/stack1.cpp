#include<bits/stdc++.h>
using namespace std;
int main(){
    //creation stack
    stack<int>st;
    //insertion
    st.push(10);
    st.push(20);
    st.push(90);
    st.push(9);
//remove
st.pop();
//check element on top
cout<<"element on top is"<<st.top()<<endl;
//size
cout<<"size of stack is:"<<st.size()<<endl;
if(st.empty())
cout<<"stak is empty"<<endl;
else
cout<<"stack is not empty"<<endl;
    return 0;
}
//printing of stack
// while(is.empty()){
//     cout<<s.top()<<""
//     s.pop();
// }
// cout<<endl;
//A monotonic stack is a special data structure used in algorithmic problem-solving. Monotonic Stack maintaining elements in either increasing or decreasing order. It is commonly used to efficiently solve problems such as finding the next greater or smaller element in an array etc.
//monotonic stack at time of insertion  means in sorted order;