#include<iostream>
#include<vector>
using namespace std;

int countprime(int n) {
    int cnt = 0;

    // Initialize all numbers as prime initially
    vector<bool> prime(n + 1, true);

    // 0 and 1 are not prime
    prime[0] = prime[1] = false;

    for (int i = 2; i < n; i++) {
        if (prime[i]) {
            cnt++;
            for (int j = 2 * i; j < n; j += i) {
                prime[j] = false;
            }
        }
    }

    return cnt;
}

int main() {
    int n;
    cin >> n;
    cout << countprime(n) << endl;

    return 0;
}
