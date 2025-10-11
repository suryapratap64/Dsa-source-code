#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 5;
    cout << i << endl;           // Output: 5
    cout << &i << endl;          // Output: Address of i (e.g., 0x61ff08)

    char ch = 'a';
    char *charPtr = &ch;
    cout << *charPtr << endl;    // Output: a

    int num = 5;
    cout << &num << endl;        // Output: Address of num
    int *ptr = &num;
    cout << *ptr << endl;        // Output: 5

    int *ptr2 = &i;
    cout << *ptr2 << endl;       // Output: 5
    cout << "address is " << ptr2 << endl;   // Output: Address of i
    cout << "value is " << *ptr2 << endl;    // Output: 5

    double d = 0.8;
    double *dptr = &d;
    cout << *dptr << " " << dptr << endl;    // Output: 0.8 Address of d

    // Pointer basics
    int *nullPtr = 0;            // null pointer
    int *iptr = &i;
    cout << iptr << endl;        // Address of i
    cout << *iptr << endl;       // Output: 5

    // Pointer and variable value copy
    int number = 5;
    int a = number;
    a++;
    int *p = &number;
    cout << "before: " << number << endl;  // Output: 5
    (*p)++;                                // increment value pointed by p
    cout << "after: " << number << endl;   // Output: 6

    // Copying pointer
    int *q = p;
    cout << q << endl;           // Same address as p
    cout << *q << endl;          // Output: 6

    // Important concept
    int j = 3;
    int *t = &j;
    cout << (*t)++ << endl;      // Output: 3, then j becomes 4
    cout << *t << endl;          // Output: 4
    cout << "before t: " << t << endl;
    t = t + 1;
    cout << "after t: " << t << endl;

    return 0;
}
