#include <iostream>
#include <algorithm> // for __gcd
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int hcf = __gcd(a, b);
    int lcm = (a * b) / hcf;

    cout << "HCF: " << hcf << endl;
    cout << "LCM: " << lcm << endl;

    return 0;
}
///second basic method
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int hcf = 1;
    int mini = min(a, b);

    // Finding HCF
    for (int i = 1; i <= mini; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    // Finding LCM using formula
    int lcm = (a * b) / hcf;

    cout << "HCF: " << hcf << endl;
    cout << "LCM: " << lcm << endl;

    return 0;
}
