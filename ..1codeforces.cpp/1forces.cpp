#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to normalize the shape by rotating and considering mirrored version
vector<pair<int, int>> normalize(const vector<pair<int, int>>& earring) {
    int K = earring.size();
    vector<pair<int, int>> min_rotation = earring;
    
    // Generate all rotations of the earring
    vector<pair<int, int>> rotated;
    for (int i = 0; i < K; ++i) {
        rotated.clear();
        for (int j = 0; j < K; ++j) {
            rotated.push_back(earring[(i + j) % K]);
        }
        if (rotated < min_rotation) {
            min_rotation = rotated;
        }
    }

    // Also consider the mirrored version (reverse the order of vertices)
    vector<pair<int, int>> mirrored = earring;
    reverse(mirrored.begin(), mirrored.end());
    
    for (int i = 0; i < K; ++i) {
        rotated.clear();
        for (int j = 0; j < K; ++j) {
            rotated.push_back(mirrored[(i + j) % K]);
        }
        if (rotated < min_rotation) {
            min_rotation = rotated;
        }
    }

    return min_rotation;
}

int main() {
    int N;
    cin >> N; // Number of earring pieces
    
    vector<vector<pair<int, int>>> earrings(N); // To store all earrings shapes
    
    // Read all earrings
    for (int i = 0; i < N; ++i) {
        int K;
        cin >> K; // Number of vertices for the i-th earring
        
        earrings[i].resize(K);
        for (int j = 0; j < K; ++j) {
            cin >> earrings[i][j].first >> earrings[i][j].second;
        }
    }

    // Normalize all earring shapes
    vector<vector<pair<int, int>>> normalized_earrings(N);
    for (int i = 0; i < N; ++i) {
        normalized_earrings[i] = normalize(earrings[i]);
    }

    // Find pairs of earrings that match
    vector<int> matching_earrings;
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            if (normalized_earrings[i] == normalized_earrings[j]) {
                matching_earrings.push_back(i + 1);
                matching_earrings.push_back(j + 1);
            }
        }
    }

    // Sort the result and output
    sort(matching_earrings.begin(), matching_earrings.end());
    for (int i : matching_earrings) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
