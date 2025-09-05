#include <iostream>
using namespace std;

int getPivot(int array[], int n) {
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e) {
        if (array[mid] >= array[0]) {
            s = mid + 1; // pivot is in right half
        } else {
            e = mid; // pivot is in left half
        }
        mid = s + (e - s) / 2;
    }
    return s; // s == e → pivot index
}

int main() {
    int array[7] = {5, 7, 22, 43, 4, 3, 2};
    cout << "Pivot index: " << getPivot(array, 7) << endl;
    cout << "Pivot element: " << array[getPivot(array, 7)] << endl;
    return 0;
}
