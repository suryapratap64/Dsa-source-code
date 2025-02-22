#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        int c = 0;
        
        // Loop over l1 and l2 within the given ranges
        for (int i = l1; i <= r1; ++i) {
            for (int j = l2; j <= r2; ++j) {
                int key = j / i;  // Integer division
                if (key % k == 0) {
                    c++;
                }
            }
        }
        
        // Output the result for the current test case
        cout << c << endl;
    }
    
    return 0;
}
