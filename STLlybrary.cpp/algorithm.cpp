#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(14);
    v.push_back(5);
    v.push_back(6);
    v.push_back(4);
    cout << "finding.b" << binary_search(v.begin(), v.end(), 6);

    // cout<<"lower bound " <<lower_bound(v.begin(),v.end(),6),v.begin();
    // cout<<"upper bound " <<upper_bound(v.begin(),v.end(),6),v.begin();
    int a = 3;
    int b = 5;
    cout << "max" << max(a, b);
    cout << "min" << min(a, b);
    string abcd = "a,b,c,d";
    cout << "string   " << abcd << endl;
    reverse(abcd.begin(), abcd.end());
    cout << "string   " << abcd << endl;
    rotate(v.begin(), v.begin() + 1, v.end());

    for (int i : v)
    {
        cout << i;
    }

    return 0;
}