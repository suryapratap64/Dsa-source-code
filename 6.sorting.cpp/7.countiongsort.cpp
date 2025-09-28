#include <bits/stdc++.h>
using namespace std;

// Counting Sort Function
void countingSort(vector<int>& arr) {
    int n = arr.size();

    // Step 1: Find the maximum element (for range of count array)
    int maxVal = *max_element(arr.begin(), arr.end());

    // Step 2: Create count array
    vector<int> count(maxVal + 1, 0);

    // Step 3: Store frequency of each element
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Step 4: Modify count array (prefix sum for stable sort)
    for (int i = 1; i <= maxVal; i++) {
        count[i] += count[i - 1];
    }

    // Step 5: Build output array (iterate backwards to maintain stability)
    vector<int> output(n);
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // Step 6: Copy sorted output back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

// Driver code
int main() {
    vector<int> arr = {9, 5, 2, 6, 5, 9, 3, 2, 8};

    cout << "Original Array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    countingSort(arr);

    cout << "Sorted Array:   ";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    return 0;
}


// ✅ Key Notes:

// Stable Sort (order of equal elements preserved).

// Works best when k (range of numbers) is not significantly larger than n.

// Not suitable for large integers with huge gaps.