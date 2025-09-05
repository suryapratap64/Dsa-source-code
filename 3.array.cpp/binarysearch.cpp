// Difference Between Indexed and Value-Based Binary Search
// Type	What we binary search on Example
// Indexed-based ==>>We binary search over positions in the array Standard "find a number in sorted array"
// Value-based  ==>> We binary search over possible answer values (not actual indices)	Aggressive Cows, Book Allocation, Min Time problems,Painter’s Partition Problem;

//==>> If array is not sorted then compare values b/w arr[mid] and arr[l]or and arr[r];
//==>> in binary search created a three condititon always ;
//==>>

// technique for binary search in hard problem value based;
int low = *max_element(boards.begin(), boards.end());
int high = accumulate(boards.begin(), boards.end(), 0); 


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