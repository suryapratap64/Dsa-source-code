#include<iostream>
using  namespace std;

int main(){
    int n;
    cin>>n;
    int cnt=0;

    for(int i=2;i<n;i++){
    if(n%2==0){
        cnt++;

    }

    }
    cout<<cnt;

    return 0;
}
