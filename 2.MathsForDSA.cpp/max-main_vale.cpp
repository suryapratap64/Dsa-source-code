#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long // Use long long for all integers to handle large values safely

signed main() {
    ios::sync_with_stdio(false); // Speeds up I/O
    cin.tie(nullptr); // Unties cin from cout for faster input

    int t;
    cin >> t; // Read number of test cases

    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;

        // The goal: Can we select k **distinct** integers from 1 to n such that their sum equals x?

        // Minimum possible sum using the smallest k distinct numbers: 1 + 2 + ... + k = k*(k+1)/2
        int min_val = (k * (k + 1)) / 2;

        // Maximum possible sum using the largest k distinct numbers from 1 to n:
        // That is: n + (n-1) + ... + (n-k+1) = k*(2n - k + 1)/2
        int max_val = (k * (2 * n - k + 1)) / 2;

        // Check if x lies in this range
        if (x >= min_val && x <= max_val) {
            cout << "YES" << endl; // It is possible to find such k numbers
        } else {
            cout << "NO" << endl; // Not possible
        }
    }

    return 0;
}
