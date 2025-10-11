#include <bits/stdc++.h>
using namespace std;

// Helper function to check if it's possible to place k cows with at least 'mid' distance apart
bool isPossible(vector<int>& stalls, int k, int mid) {
    int cowCount = 1; // Place the first cow at the first stall
    int lastPos = stalls[0];

    for (int i = 1; i < stalls.size(); i++) {
        // If the current stall is at least 'mid' away from the last cow
        if (stalls[i] - lastPos >= mid) {
            cowCount++;           // Place a cow here
            lastPos = stalls[i];  // Update last placed cow position
        }
        if (cowCount == k) {
            return true; // All cows placed successfully
        }
    }
    return false; // Could not place all cows
}

// Function to return the maximum minimum distance between cows
int aggressiveCows(vector<int>& stalls, int k) {
    sort(stalls.begin(), stalls.end()); // Sort stall positions

    int low = 1; // Minimum possible distance (cannot be zero if we want spacing)
    int high = stalls.back() - stalls[0]; // Maximum possible distance
    int ans = -1;

    // Binary search on distance
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (isPossible(stalls, k, mid)) {
            ans = mid;       // Update answer
            low = mid + 1;   // Try for a larger distance
        } else {
            high = mid - 1;  // Try for a smaller distance
        }
    }
    return ans;
}

// Example usage
int main() {
    vector<int> stalls = {1, 2, 4, 8, 9};
    int cows = 3;

    cout << aggressiveCows(stalls, cows) << endl; // Output: 3

    return 0;
}
