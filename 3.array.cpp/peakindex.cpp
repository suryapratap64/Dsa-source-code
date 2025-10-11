//                  Feature	Pivot                                 Index	Peak Index
// Array Type	 Rotated sorted array	                        Mountain/Bitonic array
// Identifies	 Smallest element (rotation point)	            Largest element (peak point)
// Usage	     Searching in rotated arrays	                Finding max in mountain arrays
// Example	     {5,7,9,1,2,3} → pivot = index of 1	            {1,4,7,5,2} → peak = index of 7

// 💡 Shortcut to remember:
// Pivot = smallest point where rotation happens.
// Peak = highest point in a mountain shape.

#include<iostream>
using namespace std;
int peakindex(int array[],int n){
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
        while(s<e){
            if(array[mid]<array[mid+1]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        return s;



    }
    int main(){
        int array[5]={6,10,5,4,3};
        peakindex(array,5);
        cout<<peakindex;
    
     

   



    return 0;
}