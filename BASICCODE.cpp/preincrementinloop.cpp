#include <iostream>
using namespace std;

int main() {
    int m = 5;

    // Example of using post-increment (i++)
    cout << "Using post-increment (i++):" << endl;
    for (int i = 1; i <= m; i++) {
        cout << "i = " << i << " (before increment)" << endl;
    }

    cout << endl;

    // Example of using pre-increment (++i)
    cout << "Using pre-increment (++i):" << endl;
    for (int i = 1; i <= m; ++i) {
        cout << "i = " << i << " (after increment)" << endl;
    }

    return 0;
}
Using post-increment (i++):
// i = 1 (before increment)
// i = 2 (before increment)
// i = 3 (before increment)
// i = 4 (before increment)
// i = 5 (before increment)

// Using pre-increment (++i):
// i = 1 (after increment)
// i = 2 (after increment)
// i = 3 (after increment)
// i = 4 (after increment)
// i = 5 (after increment)
