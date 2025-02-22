#include<bits/stdc++.h>
using namespace std;
int solve(int n,int x,int y,int z){
    if(n==0){
        //base case;
        return 0;
    }
    int a=0;
    if(n-x>0){
        a= solve(n-x,x,y,z)+1;
    }
    int b=0;
    if(n-y>0){
        b=solve(n-y,x,y,z)+1;

    }
    int c=0;
    if(n-z>0){
        c=solve(n-z,x,y,z)+1;
    }
    int ans=max(a,max(b,c));
    return ans;
}
int main(){
    int n=7;
    int x=5,y=2,z=1;
    int ans=solve(n,x,y,z);
    cout<<"ans is"<<ans;

    return 0;
}