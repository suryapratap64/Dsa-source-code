#include <bits/stdc++.h>
using namespace std;

// Function to check if we can make 'mid' items with the available resources and magic powder
bool canMakeItems(int mid, vector<int> &v1, vector<int> &v2, int k) {
    long long extra_powder_needed = 0;  // Total magic powder required

    for (int i = 0; i < v1.size(); i++) {
        long long required = 1LL * v1[i] * mid;  // Units of the i-th ingredient needed
        //1LL: The LL suffix stands for long long, which is a type in C++ that represents a 64-bit integer. By writing 1LL, we are telling the compiler that the number 1 is of type long long.
        if (required > v2[i]) {
            extra_powder_needed += (required - v2[i]);  // Calculate the deficit
        }
        // If we need more powder than available, return false early
        if (extra_powder_needed > k) {
            return false;
        }
    }
    return extra_powder_needed <= k;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> v1(n), v2(n);

    // Input the required units per item for each ingredient
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    // Input the available units of each ingredient
    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }

    // Binary search to find the maximum number of items we can produce
    int left = 0, right = 2e9;  // We assume the maximum number of items can be very large
    int ans = 0;
    //2e9 means 2e9 means 2×10^9  or 2 billion (2,000,000,000).

   




    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (canMakeItems(mid, v1, v2, k)) {
            ans = mid;  // We can make 'mid' items, try for more
            left = mid + 1;
        } else {
            right = mid - 1;  // We can't make 'mid' items, try less
        }
    }

    cout << ans << endl;

    return 0;
}
