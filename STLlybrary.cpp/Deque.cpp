#include<iostream>
#include<deque>
/*Double-ended queues are sequence containers with the feature of expansion and contraction on both ends. They are similar to vectors, but are more efficient in case of insertion and deletion of elements. Unlike vectors, contiguous storage allocation may not be guaranteed. */
using namespace std;
int main(){
    deque<int>d;
    d.push_back(1);
     d.push_back(2);
      d.push_back(3);
       d.push_back(4);
cout<<"size of the deque"<<d.size()<<endl;
for(int i:d)
cout<<i<<" ";
cout<<" print element at first index "<<d.at(1);
cout<<"emty or not"<<d.empty();
cout<<"before erase size"<<d.size()<<endl;
d.erase(d.begin(),d.begin()+1);
cout<<"after erase"<<d.size();
for(int i:d){
   cout<<i<<endl;
}


    return 0;
}