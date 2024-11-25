
#include<iostream>
using namespace std;
void swapalternate( int array[],int n){
for(int i=0;i<=6;i+=2){
    if(i+1<n){
        swap (array[i],array[i+1]);
    }
}
}
void printarray(int array[],int n){
     for(int i=0;i<6;i++){
        cout<<array[i]<<" ";
     }
     cout<<endl;
}
int main(){
    int array[6]={8,4,3,23,4,2};
    int barry[7]={9,4,3,2,5,3,2};
    swapalternate(array,6);
    swapalternate(barry,7);
    printarray(array,6);
    printarray(barry,7);
    return 0;


}