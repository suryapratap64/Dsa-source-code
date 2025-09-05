#include <bits/stdc++.h>
using namespace std;

int solve(int i, int n,     vector<int>& a, vector<int>& dp, unordered_map<int, vector<int>>& pos) {
    if (i >= n)  return 0;
    if (dp[i] != -1) {
return dp[i];
    } 

                 int ans = solve(i + 1, n, a, dp, pos);

    int x = a[i];


    auto &vec = pos[x];

       auto it = lower_bound(vec.begin(), vec.end(), i);


      int idx = it - vec.begin();

    if (idx + x - 1 < (int)vec.size()) {
        int endPos = vec[idx + x - 1];
        ans = max(ans, x + solve(endPos + 1, n, a, dp, pos));
    }

    return dp[i] = ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; 
        
        cin >> n;
        vector<int> a(n);


        for (int i = 0; i < n; i++)
        
        {
            cin >> a[i];
        }
        unordered_map<int, vector<int>> pos;
        for (int i = 0; i < n; i++)
        {
 pos[a[i]].push_back(i);
        }

        vector<int> dp(n, -1);
        cout << solve(0, n, a, dp, pos) << "\n";
    }
}
