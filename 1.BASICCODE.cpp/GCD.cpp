#include <iostream>
#include <numeric>  // For std::gcd in C++17

int main() {
    int a = 56, b = 98;
    std::cout << "GCD of " << a << " and " << b << " is " << std::gcd(a, b) << std::endl;
    return 0;
}
///////////
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a = 56, b = 98;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
    return 0;
}
//////////////
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int a = 56, b = 98;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
    return 0;
}

