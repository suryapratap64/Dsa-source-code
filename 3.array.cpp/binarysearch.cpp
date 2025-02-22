#include<iostream>
using namespace std;
int binarysearch(int array[], int n){
int start=0;
 int end=n-1;
 int key;
 cin>>key;
//  int mid=(start+end)/2;
int mid=start+(end-start)/2;
while(start<=end){
    if(array[mid]==key){
        cout<<mid; 
    }
    if(array[mid]<key){
        start=mid+1;
    }
    else{
        start=mid-1;
    }
    mid=(start+end)/2;
}
return -1;
}
int main (){
    int array[4]={4,9,3,5};
    int arrayindex = binarysearch(array,4);
    cout<<arrayindex;
    return 0;
}