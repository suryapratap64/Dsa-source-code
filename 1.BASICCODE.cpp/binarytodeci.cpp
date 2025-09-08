#include <iostream>
#include <math.h>
//trick for num to binary 
class Solution {
public:
    int reverseBits(int n) {
        // in that num to string
        string s = bitset<32>(n).to_string();

        // reverse string
        reverse(s.begin(), s.end());
        // st0 num
        bitset<32> rev(s);
        
        return (uint32_t)rev.to_ulong();
    }
};
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0, ans = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            ans = ans + pow(2, i);
            n = n / 10;
            i++;
        }
    }
    cout << ans;

    return 0;
}
