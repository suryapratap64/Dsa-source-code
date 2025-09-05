#include <bits/stdc++.h>
using namespace std;

bool ispossible(vector<int> &stalls, int k, int mid) {
    int cowcount = 1; // first cow placed
    int lastpos = stalls[0];

    for (int i = 1; i < stalls.size(); i++) {
        if (stalls[i] - lastpos >= mid) {
            cowcount++;
            lastpos = stalls[i];
            if (cowcount == k) {
                return true;
            }
        }
    }
    return false;
}

int aggressivecow(vector<int> &stalls, int k) {
    sort(stalls.begin(), stalls.end());

    int s = 0;
    int e = stalls.back() - stalls.front(); // max possible distance
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (ispossible(stalls, k, mid)) {
            ans = mid;      // store the answer
            s = mid + 1;    // try for bigger distance
        } else {
            e = mid - 1;    // try for smaller distance
        }
    }
    return ans;
}

int main() {
    vector<int> stalls = {1, 2, 8, 4, 9};
    int k = 3;
    cout << aggressivecow(stalls, k);
    return 0;
}
