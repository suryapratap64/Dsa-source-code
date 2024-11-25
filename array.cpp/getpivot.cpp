#include<iostream>
using namespace std;
int getpivote(int array[],int n){
    int s=0;
    int e=n;
    cin>>n;
    int mid=s+(e-s)/2;
    while(s<e){
        if(array[mid]>=array[0]){
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
    int array[7]={5,7,22,43,4,3,2};
    
    cout<<getpivote( array,7);


    return 0;
}
