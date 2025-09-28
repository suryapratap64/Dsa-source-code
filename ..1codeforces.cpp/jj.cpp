#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll NEG_INF = (ll)-9e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int n;
        ll y;
        cin >> n >> y;
        vector<int> c(n);
        int maxC = 0;
        for (int i = 0; i < n; ++i) {
            cin >> c[i];
            maxC = max(maxC, c[i]);
        }

       
        vector<int> freq(maxC + 1, 0);
        for (int v : c) freq[v]++;


        vector<int> pref(maxC + 1, 0);
        for (int i = 1; i <= maxC; ++i) pref[i] = pref[i-1] + freq[i];

        ll best = NEG_INF;

   
        for (int x = 2; x <= maxC; ++x) {
            ll sumNew = 0;      
            ll reused = 0;       
            int maxK = (maxC + x - 1) / x; 

            for (int k = 1; k <= maxK; ++k) {
                int L = (k - 1) * x + 1;
                int R = min(k * x, maxC);
                if (L > R) continue;
                int need = pref[R] - pref[L - 1];
                if (need == 0) continue;
                sumNew += 1LL * k * need;
                if (k <= maxC) {
                    reused += min((ll)freq[k], (ll)need);
                }
            }

            ll printed = (ll)n - reused;
            ll income = sumNew - y * printed;
            if (income > best) best = income;
        }

        
        if (maxC < 2) {
         
            ll sumNew = 0, reused = 0;
            for (int i = 0; i < n; ++i) {
                int np = (c[i] + 1) / 2;
                sumNew += np;
            }
        
            unordered_map<int,int> need;
            for (int i = 0; i < n; ++i) ++need[(c[i] + 1) / 2];
            for (auto &kv : need) {
                int val = kv.first;
                int cnt = kv.second;
                if (val <= maxC) reused += min((ll)freq[val], (ll)cnt);
            }
            ll printed = (ll)n - reused;
            ll income = sumNew - y * printed;
            best = max(best, income);
        }

        cout << best << "\n";
    }
    return 0;
}
