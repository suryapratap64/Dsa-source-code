#include<iostream>
#include<vector>
using namespace std;
bool searchmatrix(int matrix[][4],int row,int col,int target){
    int r =sizeof (matrix[3][4]);
    int c =sizeof (matrix[3][4]);
    int start=0;
    int end=r*c-1;
    //finding no of coloums in 2D matrix
        //     int row = matrix.size() ;
        // int col = matrix[0].size() ;

    int mid=start+(end-start)/2;
    while(start<=end){
         int element = matrix[mid / c][mid % c]; // Correct mapping from 1D to 2D
        if(element==target){
            return 1;

        }
        if(element<target){
            start=start+1;

        }
        else{
            end=mid-1;
        }
        mid =start+(end-start)/2;
    }
    return 0;
    
}
int main (){
int matrix[3][4]={3,5,2,5,2,4,5,5,4,5,4,4,};
for (int i=0;i<3;i++){
for(int j=0;j<4;j++){
cout<<matrix[i][j]<<" ";
        }
        cout<<endl;

    }
    cout<<searchmatrix(matrix,3,4,5);




    return 0;
}