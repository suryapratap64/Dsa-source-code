#include<iostream>
using namespace std;
void printarray(int arr[],int n,int i){
    //base case
    if(i>=n){
        return;
    }
   
cout<<arr[i]<<" ";
//baki recurtion sambhal lega
 printarray(arr ,n,i+1);

}

int main(){
    int arr[5]={4,6,43,6,7};
    int n=5;
    int i=0;
    printarray(arr ,n, i);

    return 0;
}