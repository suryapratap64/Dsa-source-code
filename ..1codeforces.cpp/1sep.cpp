#include <bits/stdc++.h>
using namespace std;

long long alternatingSum(const vector<long long>& a) {
    long long res = 0;
    for (int i = 0; i < (int)a.size(); i++) {
        if (i % 2 == 0) res += a[i];
        else res -= a[i];
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

       
        long long init = alternatingSum(a);
        long long best = init;

       
        if (n > 1) {
            vector<long long> b = a;
            long long cost = 0;
            if (n % 2 == 1) {
                swap(b[0], b[n - 1]);
                cost = n - 1;
            } else { 
                swap(b[1], b[n - 1]);
                cost = n - 2;
            }
            best = max(best, alternatingSum(b) + cost);
        }

        
        long long minPos = LLONG_MAX, maxNeg = LLONG_MIN;
        int idxPos = -1, idxNeg = -1;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) { 
                if (a[i] < minPos) {
                    minPos = a[i];
                    idxPos = i;
                }
            } else { 
                if (a[i] > maxNeg) {
                    maxNeg = a[i];
                    idxNeg = i;
                }
            }
        }
        if (idxPos != -1 && idxNeg != -1) {
            vector<long long> c = a;
            swap(c[idxPos], c[idxNeg]);
            long long cost = abs(idxPos - idxNeg);
            best = max(best, alternatingSum(c) + cost);
        }

        cout << best << endl;
    }
    return 0;
}
