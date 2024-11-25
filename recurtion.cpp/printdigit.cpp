#include<iostream>
using namespace std;
void printdigit(int n){
    //base case 
    if(n==0){
        return;
    }
    int digit=n%10;
     printdigit(n/10);
    cout<<digit;
  
   
}
int main(){
    int n;
    cin>>n;
    printdigit(n);
    return 0;
} 

