#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &pages, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;

    for (int p : pages) {
        if (pageSum + p <= mid) {
            pageSum += p;
        } else {
            studentCount++;
            pageSum = p;
            if (studentCount > m || p > mid) {
                return false;
            }
        }
    }
    return true;
}

int bookAllocation(vector<int> &pages, int m) {
    if (m > pages.size()) return -1; // not enough books

    int low = *max_element(pages.begin(), pages.end());
    int high = accumulate(pages.begin(), pages.end(), 0);
    int ans = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (isPossible(pages, m, mid)) {
            ans = mid;
            high = mid - 1; // try smaller max
        } else {
            low = mid + 1;  // try larger max
        }
    }
    return ans;
}

int main() {
    vector<int> pages = {12, 34, 67, 90};
    int m = 2;
    cout << "Minimum possible maximum pages: "
         << bookAllocation(pages, m) << endl;
    return 0;
}
