#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 2;
    int b = 3;
    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << ~b << endl;
    cout << (a ^ b) << endl;

    // left shift
    cout << (a << 1) << endl;
    // rigth shift
    cout << (a >> 1) << endl;
    // increment or decriment operator
    int i = 7;
    cout << ++i << endl;
    cout << i++ << endl;
    cout << i-- << endl;
    cout << --i << endl;

    return 0;
}
