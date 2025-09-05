#include<bits/stdc++.h>
using namespace std;
bool findelement(vector<int>v,int s,int e,int key){
    if(s>e){
        return -1;
    }
    // This formula not used because 
    //Once overflow happens, mid becomes wrong, and your binary search might break or loop infinitely.
    //Using (s + e) / 2 in binary search works fine in many cases, but it has a hidden risk — integer overflow.
    // int mid=(s+e)/2;

    int mid = (s+(e-s))/2;

    if(v[mid]==key){
        return mid;
    }
    if(v[mid]>key){
        return findelement(v,s,mid-1,key);
    }
    if(v[mid]<key){
        return findelement(v,mid+1,e,key);
    }

}
int main(){
    vector<int>v{5,7,2,4,8};
    int n=v.size();
    int key;
    cin>>key;
    int s=0;
    int e=n-1;
    int ans =findelement(v,s,e,key);
    cout<<ans;

    return 0;
}