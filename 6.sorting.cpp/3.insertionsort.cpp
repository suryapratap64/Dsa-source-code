// Algorithm , Approach , Best , Average , Worst , Space , Notes
// Insertion Sort , Insert each element into its correct position in the sorted part , O(n) , O(n²) , O(n²) , O(1) , Stable, good for small arrays or nearly sorted data

#include <iostream>
using namespace std;

// Function to perform Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];       // current element to insert
        int j = i - 1;

        // Shift elements of the sorted part that are greater than key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Place key at its correct position
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    insertionSort(arr, n);

    cout << "Sorted array:   ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}

// Notes:
// ✅ Stable (keeps equal elements in order).
// ✅ Efficient for small arrays or nearly sorted data.
// ❌ Not good for large datasets.