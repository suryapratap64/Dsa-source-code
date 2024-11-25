#include<iostream>
using namespace std;
int countprime(int n){
    int cnt=0;
     bool prime[n+1] ;
     prime[0]=prime[1]=false;
     for(int i=2;i<n;i++){
        if(prime[i]){
            cnt++;
            for(int j=2*i;j<n;j=j+i){
                prime[j]=0;

            }
        }
     }
     return cnt;


}
int main(){
int n;
cin>>n;
cout<<countprime(77);

    return 0;
}