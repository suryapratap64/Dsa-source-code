#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long long num) {
    long long root = sqrt(num);
    return (root * root == num);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        
        long long x = (static_cast<long long>(n) * (n + 1)) / 2;
        
        if (isPerfectSquare(x)) {
            cout << -1 << endl;
            continue;
        }

        vector<int> v(n);
        iota(v.begin(), v.end(), 1); 

        for (int i = 1; i < n; i++) {
            long long y = (static_cast<long long>(i) * (i + 1)) / 2;
            if (isPerfectSquare(y)) {
                swap(v[i - 1], v[i]);
                i++; 
            }
        }

        for (int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
