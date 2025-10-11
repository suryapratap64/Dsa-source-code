#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &boards, int k, int mid) {
    int painterCount = 1;
    int currSum = 0;

    for (int length : boards) {
        if (currSum + length <= mid) {
            currSum += length;
        } else {
            painterCount++;
            if (painterCount > k || length > mid) return false;
            currSum = length;
        }
    }
    return true;
}

int painterPartition(vector<int> &boards, int k) {
    int s = *max_element(boards.begin(), boards.end()); // min possible time
    int e = accumulate(boards.begin(), boards.end(), 0); // max possible time
    int ans = e;

    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (isPossible(boards, k, mid)) {
            ans = mid;
            e = mid - 1; // try smaller time
        } else {
            s = mid + 1; // try bigger time
        }
    }
    return ans;
}

int main() {
    vector<int> boards = {10, 20, 30, 40};
    int k = 2;
    cout << "Minimum time: " << painterPartition(boards, k);
    return 0;
}
