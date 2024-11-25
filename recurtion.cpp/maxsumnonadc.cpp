#include<bits/stdc++.h>

using namespace std;
void find(vector<int>&v,int sum,int i,int& maxi){
    //base case
    if(i>=v.size()){
     maxi=max(sum,maxi);
        return ; 
    }
     //include
    find(v,sum+v[i],i+2,maxi);
    //exclude
    find(v,sum,i+1,maxi);
   
}
int main(){
vector<int>v{5,3,4,5,2,4};
int maxi=INT_MIN;
int sum=0;
int i=0;
find(v,sum,i,maxi);
cout<<maxi;
    return 0;
}