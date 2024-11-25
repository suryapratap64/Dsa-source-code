#include <bits/stdc++.h>
using namespace std;
// renge of int is -2^31 to2^31;

int getmin(int array[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {

        if (array[i] < min)
        {
            min = array[i];
        }
    }
    // if(array[i]<min){
    //     min=array[i];
    //     return min;
    // }

    return min;
}
int getmax(int array[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }

    }
    return max;
}
int main()
{
    int size;
    cin >> size;
    int array[5] = {8, 9, 4, 6, 55};
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    cout << getmin(array, size)<<endl;
      cout << getmax(array, size);

    return 0;
}