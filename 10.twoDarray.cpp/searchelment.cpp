#include<iostream>
using namespace std;
bool ispresent(int arr[][4],int target,int i,int j){
     for (int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]=target){
                return 1;}
            }
        }
        return 0;

}
int main(){
int arr[3][4]={3,5,22,5,245,24,5,5,4,555,4,54,};
    for (int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }
    cout<<"enter element to search"<<endl;
    int target;
    cin>>target;
    if(ispresent(arr,target,3,4)){
        cout<<" surya bhao element found"<<endl;
    }
    else{
        cout<<"element is not found"<<endl;
    }
  

    return 0;

}