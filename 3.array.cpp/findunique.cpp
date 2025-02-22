#include <iostream>
using namespace std;
int main()
{
    int ans = 0;
    int array[7] = {3, 7, 2, 2, 7, 3, 4};
    for (int i = 0; i <= 7; i++)
    {
        ans = ans ^ array[i];
    }
    cout << ans;
    return 0;
}