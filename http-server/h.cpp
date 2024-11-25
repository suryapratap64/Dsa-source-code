#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end(), greater<int>());

        long long max_sum = 0;

        // Calculate the sum of adjacent elements
        for (int i = 1; i < n; i += 2) {
            max_sum += arr[i] + arr[i - 1];
        }

        cout << max_sum << endl;
    }

    return 0;
}
