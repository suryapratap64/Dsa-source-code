#include<iostream>
#include<limits.h>
using namespace std;
 void findmax(int arr[],int n, int i,int& maxi){
    //base case kar do baki recurtion kar lega
    if(i>=n){
        return;
    }
    //recustion ks kaam
    else if(arr[i]>=maxi){
        maxi=arr[i];
    }
    //recurtion calling its function
    findmax(arr,n,i+1,maxi);

}
int main(){
    int arr[6]={5,6,4,6,74,6};
    int n=6;
    int maxi=INT_MIN;
    int min=INT_MAX;
    //change maxi ki jagah pe mini ho jayeag 
    int i=0;
    findmax(arr,n,i,maxi);
    cout<<"maimum element is:"<<maxi;
    return 0;
}