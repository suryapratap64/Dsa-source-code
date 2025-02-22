#include <bits/stdc++.h>
using namespace std;
void getsum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    cout << sum << endl;
}
int main()
{
    int arr[5] = {2, 5, 6, 3, 6};
    getsum(arr, 5);
    getsum(arr + 3, 3);

    sizeof(arr);

    return 0;
}