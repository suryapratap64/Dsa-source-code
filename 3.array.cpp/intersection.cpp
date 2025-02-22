#include <bits/stdc++.h>
using namespace std;
// vector<int>ans;

int main()
{
    vector<int> ans;

    int array[5] = {4, 5, 3, 6, 7};
    int barray[6] = {6, 4, 67, 75, 29, 8};
    for (int i = 0; i <= 5; i++)
    {
        int element = array[i];

        for (int j = 0; j < 6; j++)
        {

            if (element == barray[j])
            {
                ans.push_back(element);
            }
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }

    return 0;
}