#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());
    vector<long long> pref(n + 1, 0);
    for (int i = 0; i < n; i++) pref[i + 1] = pref[i] + a[i];

    long long total = pref[n];
    long long ans = 0;

    for (int x = 0; x <= k; x++) {
      
        int removedFromStart = 2 * x;
        int removedFromEnd = (k - x);

        if (removedFromStart > n || removedFromEnd > n) continue;
        if (removedFromStart + removedFromEnd > n) continue;

        long long sumRemoved = pref[removedFromStart] + (pref[n] - pref[n - removedFromEnd]);
        ans = max(ans, total - sumRemoved);
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
