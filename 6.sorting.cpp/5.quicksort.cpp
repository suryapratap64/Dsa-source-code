// Algorithm , Approach , Best , Average , Worst , Space , Notes
// Quick Sort , Partition array around pivot and recursively sort subarrays , O(n log n) , O(n log n) , O(n²) , O(log n) , Not stable, very fast in practice, in-place

#include <iostream>
using namespace std;

// Partition function (Lomuto partition scheme)
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // choose last element as pivot
    int i = low - 1;       // index of smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) { // elements <= pivot to left
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]); // place pivot at right position
    return i + 1;
}

// Quick Sort recursive function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // partition index
        quickSort(arr, low, pi - 1);        // sort left part
        quickSort(arr, pi + 1, high);       // sort right part
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    quickSort(arr, 0, n - 1);

    cout << "Sorted array:   ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}

// Notes:
// ❌ Not stable (equal elements may swap order).
// ✅ In-place (no extra arrays).
// ✅ Very fast in practice with good pivot choice (random/median).
// ✅ Widely used in real-world systems (standard libraries).