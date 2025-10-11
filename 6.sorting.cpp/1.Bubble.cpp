// Algorithm ,Approach, Best, Average, Worst ,Space, Notes
// Bubble Sort, Swap adjacent repeatedly ,O(n), O(n²), O(n²), O(1), Rare concept Q

#include <iostream>
using namespace std;

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        // Compare adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                //largest  elemebnt at the end
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped, array is sorted
        if (!swapped) break;
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    bubbleSort(arr, n);

    cout << "Sorted array:   ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}

// ✅ Stable
// ✅ Best case O(n) with optimization (already sorted)
// ❌ Worst & Average O(n²) (very slow for big arrays)
// 💡 Mostly used for teaching purposes.