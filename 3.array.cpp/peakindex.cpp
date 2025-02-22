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