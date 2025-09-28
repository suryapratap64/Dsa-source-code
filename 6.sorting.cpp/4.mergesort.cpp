// Algorithm , Approach , Best , Average , Worst , Space , Notes
// Merge Sort , Divide array into halves, sort recursively, then merge , O(n log n) , O(n log n) , O(n log n) , O(n) , Stable, good for large data, uses extra space

#include <iostream>
using namespace std;

// Merge two sorted subarrays: arr[l..m] and arr[m+1..r]
void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;   // size of left subarray
    int n2 = r - m;       // size of right subarray

    // Create temp arrays
    int* L = new int[n1];
    int* R = new int[n2];

    // Copy data into temp arrays
    for (int i = 0; i < n1; i++) L[i] = arr[l + i];
    for (int j = 0; j < n2; j++) R[j] = arr[m + 1 + j];

    // Merge temp arrays back into arr[l..r]
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {   // <= keeps it stable
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    // Copy remaining elements
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];

    delete[] L;
    delete[] R;
}

// Recursive Merge Sort
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;  // mid-point
        mergeSort(arr, l, m);     // sort left half
        mergeSort(arr, m + 1, r); // sort right half
        merge(arr, l, m, r);      // merge sorted halves
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array:   ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}


// Notes:
// ✅ Stable (equal elements keep order because we use <=).
// ✅ Very good for large datasets.
// ✅ Consistent time complexity.
// ❌ Needs extra space (not in-place).