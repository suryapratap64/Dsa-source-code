#include <bits/stdc++.h>
using namespace std;

// A utility function to do counting sort of arr[] according to the digit represented by exp
void countingSortForRadix(vector<int>& arr, int exp) {
    int n = arr.size();
    vector<int> output(n);
    int count[10] = {0};

    // Count occurrences of digits
    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    // Change count[i] so that count[i] contains position of this digit in output[]
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build output array (iterate backward for stability)
    for (int i = n - 1; i >= 0; i--) {
        int digit = (arr[i] / exp) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }

    // Copy output to arr
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

// Main Radix Sort function
void radixSort(vector<int>& arr) {
    // Find the maximum number to know number of digits
    int maxVal = *max_element(arr.begin(), arr.end());

    // Do counting sort for every digit (exp = 1, 10, 100, ...)
    for (int exp = 1; maxVal / exp > 0; exp *= 10)
        countingSortForRadix(arr, exp);
}

// Driver code
int main() {
    vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};

    cout << "Original Array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    radixSort(arr);

    cout << "Sorted Array:   ";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    return 0;
}

/* Time Complexity Table
| Case        | Complexity |
|-------------|------------|
| Best Case   | O(n * k)   |  // n = number of elements, k = number of digits
| Average Case| O(n * k)   |
| Worst Case  | O(n * k)   |
| Space       | O(n + k)   |  // output array + count array per digit

Notes:
- ✅ Stable sort (order of equal elements preserved)
- ✅ Non-comparison based, can achieve linear time in practice
- ⚠ Works best for integers with limited number of digits
- ❌ Needs extra space for output and count arrays
*/
