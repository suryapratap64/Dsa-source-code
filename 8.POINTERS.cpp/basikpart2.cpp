#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[10];  // uninitialized array

    cout << "address of element: " << arr << endl;            // arr is a pointer to arr[0]
    cout << "address of arr[2]: " << &arr[2] << endl;         // address of 3rd element

    cout << *arr << endl;            // value at arr[0] → garbage (uninitialized)
    cout << "5th: " << *arr + 1 << endl;        // arr[0] + 1 → garbage + 1
    cout << "6th: " << *(arr + 1) << endl;      // arr[1] → garbage
    cout << "7th: " << (*arr) + 1 << endl;      // same as 5th
    cout << "8th: " << arr[2] << endl;          // garbage
    cout << "9th: " << *(arr + 2) << endl;      // same as arr[2]

    int brr[10] = {5, 66, 3, 6, 33};  // partially initialized
    int i = 3;
    cout << brr[i] << " " << i[brr] << endl;    // both print brr[3] = 6 (commutative property)

    // Pointer vs array size
    int temp[10];
    cout << sizeof(temp) << endl;       // 10 * sizeof(int) = 40 (on most systems)
    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl;        // size of pointer = 8 (on 64-bit systems)
    cout << sizeof(*ptr) << endl;       // size of int = 4
    cout << sizeof(&ptr) << endl;       // size of pointer to pointer = 8
    cout << sizeof(&temp) << endl;      // pointer to entire array = 8 (on 64-bit)

    int a[4] = {1, 2, 3, 4};
    cout << &a[3] << endl;              // address of last element
    cout << &a << endl;                 // address of whole array

    int *p = &a[4];   // points one past the end (legal, but dereferencing is UB)
    cout << &p << endl;  // address of pointer `p` itself

    return 0;
}
