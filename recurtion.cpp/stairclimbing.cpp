#include<iostream>
using namespace std;
int climbingstairs(int n){
    if(n==0 ||n==1){
        return 1;
    }
    int step=climbingstairs(n-1)+climbingstairs(n-2);
    return step;
}
int main(){
int n;
cin>>n;
int ans=climbingstairs(n);
cout<<"number of step is;"<<ans;



    return 0;
}