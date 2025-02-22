#include <iostream>
#include <vector>
using namespace std;
vector<int> reverse(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;
    while (s < e)
    {
        swap(v[s++], v[s--]);
    }
    return v;
}

int main()
{
    
    vector<int>v1;
    v1.push_back(44);
    v1.push_back(6);
    v1.push_back(8);
   vector<int>v2;
   v2.push_back(8);
   v2.push_back(7);
   int n=v1.size(), m=v2.size();
   

    int i = n - 1;
    int j = m - 1;
    int carry = 0;
    while (i > 0 && j >= 0)
    {
        int val1 = v1[i];
        int val2 = v2[j];
        int sum = val1 + val2 + carry;

        carry = sum / 10;
        sum = sum % 10;
        i--;
        j--;

        // for first case
    }
    while (i >= 0)
    {
        int sum = v1[i] + carry;

        carry = sum / 10;
        sum = sum % 10;
        sum += sum;
        j--;
    }
    while (j >= 0)
    {
        int sum = v2[j] + carry;

        carry = sum / 10;
        sum = sum % 10;
        sum += sum;
        j--;
    }
    while (carry != 0)
    {
        int sum = carry;

        carry = sum / 10;
        sum = sum % 10;
        sum += sum;
        j--;
    }
    cout << reverse;

    return 0;
}