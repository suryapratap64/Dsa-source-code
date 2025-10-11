#include <bits/stdc++.h>
using namespace std;

// Function to print all pairs with sum 5
void pairsum(vector<int>& v) {
    vector<pair<int, int>> result;

    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            if (v[i] + v[j] == 5) {
                result.push_back({min(v[i], v[j]), max(v[i], v[j])});
            }
        }
    }

    // Print all pairs
    for (auto p : result) {
        cout << "(" << p.first << ", " << p.second << ")\n";
    }
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    pairsum(v); // no need to pass n separately

    return 0;
}
