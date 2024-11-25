#include<iostream>
#include<vector>
using namespace std;
void spiralprint(int matrix[3][4],int i,int j){
    int row=3;//sizeof(matrix)/4;
    int col= 4;//sizeof(matrix)/4;
    int count =0;
    int total=row*col;
    int startingrow=0;
    int startingcol=0;
    int endingrow=row-1;
    int endingcol=col-1;
    while(count<total){
        for(int i=startingcol;i<=endingcol;i++){
           cout<<matrix[3][4]<<endl;
           count++;
        }
           endingcol++;
        
        for(int i=startingrow;i<=endingrow;i++){
           cout<<matrix[i][endingcol]<<endl;
           count++;
    }
    endingrow--;
    for(int i=endingcol;count<total && i>=startingcol;i--){
        cout<<matrix[endingrow][i]<<endl;
        count++;

    }
    endingrow--;

    for(int i=endingcol;count<total && i>=startingcol;i--){
        cout<<matrix[endingrow][i]<<endl;
        count++;

    }
    for(int i=endingrow;count<total && i>=startingrow;i--){
        cout<<matrix[endingrow][i]<<endl;
        count++;

    }
    startingcol++;

}
}
int main(){
    int arr[3][4]={3,5,2,5,5,4,5,5,4,5,4,4,};
    for (int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }
    spiralprint(arr,3,4);



    return 0;
}