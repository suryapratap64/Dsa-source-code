#include<bits/stdc++.h>
using namespace std;
// Using std:: namespace for standard library components
bool sorted(vector<int> &arr,int i,int &n){
    //base case

    if(i>=n-1){
        return true;
    }
    //bas ek case
    if(arr[i+1]<=arr[i]){
        return false;
    }
    //baki recurtion
   return  sorted(arr,i+1,n);

}
int main(){
    vector<int>v{5,7,6,43,7};
    int n=v.size();
    int i=0;
     bool issorted=sorted(v,i,n);
    if(issorted){
        cout<<"vector is sorted";
    }
    else{
        cout<<"vector is  not sorted";
    }



    return 0;

}