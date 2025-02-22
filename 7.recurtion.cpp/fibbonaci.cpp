#include<iostream>
using namespace std;
int fibbu(int n){
    if(n==1){
        return 0;

    }
    if(n==2){
        return 1;
    }
  
    return fibbu(n-1)+fibbu(n-2);
      
//    0 1 1 2 

}
int main()

{
    int n;
    cin>>n;
  

  cout<<  fibbu(n);
   

}
