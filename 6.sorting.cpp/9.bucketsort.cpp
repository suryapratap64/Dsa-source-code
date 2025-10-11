#include <bits/stdc++.h>
using namespace std;

// Bucket Sort function
void bucketSort(vector<float>& arr) {
    int n = arr.size();
    if (n <= 0) return;

    // 1. Create n empty buckets
    vector<vector<float>> buckets(n);

    // 2. Put array elements into different buckets
    for (int i = 0; i < n; i++) {
        int idx = n * arr[i]; // assuming arr[i] in [0,1)
        buckets[idx].push_back(arr[i]);
    }

    // 3. Sort individual buckets
    for (int i = 0; i < n; i++)
        sort(buckets[i].begin(), buckets[i].end());

    // 4. Concatenate all buckets into arr[]
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (float val : buckets[i])
            arr[index++] = val;
    }
}

int main() {
    vector<float> arr = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};

    cout << "Original Array: ";
    for (float x : arr) cout << x << " ";
    cout << "\n";

    bucketSort(arr);

    cout << "Sorted Array:   ";
    for (float x : arr) cout << x << " ";
    cout << "\n";

    return 0;
}

/* Time Complexity Table
| Case        | Complexity |
|-------------|------------|
| Best Case   | O(n + k)   |  // elements evenly distributed
| Average Case| O(n + k)   |
| Worst Case  | O(n^2)     |  // all elements go into one bucket
| Space       | O(n + k)   |  // n for buckets, k for extra lists

Notes:
- ✅ Stable (if underlying sort used is stable)
- ✅ Good for uniformly distributed floating-point numbers in [0,1)
- ❌ Not in-place (uses extra space for buckets)
- ⚠ Worst-case similar to O(n^2) if distribution is poor
*/
