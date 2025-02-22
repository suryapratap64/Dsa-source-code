#include <iostream>
using namespace std;
bool checksort(int arr[], int i)
{
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            count++;
        }
    }
    if (arr[3] > arr[0])
    {
        count++;
        return count <= 1;
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[4] = {6, 4, 8, 5};
    cout << checksort(arr, 4);

    return 0; 
}