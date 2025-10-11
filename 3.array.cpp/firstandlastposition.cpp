#include <bits/stdc++.h>
using namespace std;

// Function to find first occurrence
int firstOcc(int arr[], int n, int key) {
    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key) {
            ans = mid;      // possible answer
            e = mid - 1;    // look in left half
        }
        else if (key > arr[mid]) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return ans;
}

// Function to find last occurrence
int lastOcc(int arr[], int n, int key) {
    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key) {
            ans = mid;      // possible answer
            s = mid + 1;    // look in right half
        }
        else if (key > arr[mid]) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    int array[] = {4, 4, 4, 5, 9, 42, 42}; // must be sorted for binary search
    int n = sizeof(array) / sizeof(array[0]);

    int key;
    cout << "Enter key: ";
    cin >> key;

    int first = firstOcc(array, n, key);
    int last = lastOcc(array, n, key);

    cout << "First occurrence index: " << first << endl;
    cout << "Last occurrence index: " << last << endl;

    return 0;
}
