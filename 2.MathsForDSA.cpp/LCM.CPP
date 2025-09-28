#include <iostream>
#include <algorithm> // for __gcd

using namespace std;

long long findLCM(int a, int b) {
    return (1LL * a * b) / __gcd(a, b);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << "LCM: " << findLCM(a, b) << endl;
    return 0;
}
