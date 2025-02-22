#include <iostream>
using namespace std;

int main() {
    // Loop through numbers 1 to 10
    for (int i = 1; i <= 10; i++) {
        // If the number is even, skip to the next iteration
        if (i % 2 == 0) {
            cout << "Skipping even number: " << i << endl;
            continue; // Skip the rest of this iteration and move to the next one
        }
        // This will only print for odd numbers
        cout << "Processing odd number: " << i << endl;
    }

    return 0;
}
