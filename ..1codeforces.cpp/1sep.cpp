#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        bool possible = false;

        for (int L = 1; L <= 60; ++L) { // maximum 60 bits for long long
            if (n >= (1LL << L)) continue;

            bool ok = true;
            for (int i = 0; i < L; ++i) {
                int bi = (n >> i) & 1;
                int bj = (n >> (L - 1 - i)) & 1;

                if (bi != bj) {
                    ok = false;
                    break;
                }
            }

            if (!ok) continue;

            if (L % 2 == 1) {
                int mid = L / 2;
                if (((n >> mid) & 1) == 1) ok = false;
            }

            if (ok) {
                possible = true;
                break;
            }
        }

        cout << (possible ? "YES\n" : "NO\n");
    }

    return 0;
}