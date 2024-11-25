#include <bits/stdc++.h>
using namespace std;
bool ispresent(int arr[3][4], int target, int row, int col)
{
    for(int i=0;i<=row;i++){
        for(int j=0;j<=col;j++){
            if(arr[i][j]=target){
                return 1;
            }
        }
    }
    return 0;

}
int main()
{
    int arr[3][4] = {{4, 5, 6, 7}, {6, 4, 3, 7}, {74, 56, 33, 3}};
    cout << "enter the elemet to search" << endl;
    int target;
    cin >> target;
    if (ispresent(arr, target, 3, 4)){
        cout<<"element preaent in the matrix";
    }
        else{
            cout<<"element is not present in the matrix";
        }
    

        return 0;
}