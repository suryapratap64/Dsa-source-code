#include <bits/stdc++.h>
using namespace std;

int  firstocc(int array[], int n)
{

    int s = 0, e = n - 1;
    int key;

    cin >> key;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (array[mid]== key)
        {
            ans = mid;
            
            e = mid - 1;
        }
        else if (key > array[mid])
        {
            s = mid + 1;
        }
        else if (key < array[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
 
}
int main()
{
    int array[7] = {5, 4, 4, 4, 42, 4, 9};
   
    cout << firstocc(array,7) << endl;

    return 0;
}
