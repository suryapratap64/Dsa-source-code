#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, x, y, l;
        cin >> n >> m >> x >> y >> l;

        long long reachableCells = 1;
        if (l == 1)
        {
            cout << static_cast<long long>(n) * m << endl;
        }
        else
        {
            int upword = (x - 1) / l;
            int downword = (n - x) / l;
            int left = (y - 1) / l;
            int right = (m - y) / l;

            reachableCells = 1LL + (upword + downword) + (left + right) + (upword + downword) * static_cast<long long>(left + right);
            cout << reachableCells << endl;
        }
    }

    return 0;
}