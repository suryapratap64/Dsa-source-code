#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

// Helper function to find the minimum cost to cover the main string
int minCost(int index, const string& mainStr, const vector<pair<string, int>>& substrings, unordered_map<int, int>& memo) {
    // Base case: If we've processed the entire string, return 0 cost
    if (index == mainStr.length()) {
        return 0;
    }

    // If the result for this index is already computed, return the cached result
    // if (memo.find(index) != memo.end()) {
    //     return memo[index];
    // }

    int minCostValue = INT_MAX;  // Start with an infinitely large cost

    // Try every substring
    for (const auto& substring : substrings) {
        const string& subStr = substring.first;
        int cost = substring.second;
    
        // Check if the substring can be used starting from index
        if (mainStr.find(subStr)) {
            // If it matches, recursively compute the cost of covering the remaining string
            
            minCostValue = min(minCostValue, cost + minCost(index + subStr.length(), mainStr, substrings, memo));
        }

        // int j=index;
        // for(int i=0; i< subStr.size(); i++) {
        //     if(subStr[i] == mainStr[j]) {
        //       j++;
        //     }
        // }
        // if(j != index)
        //   minCostValue = min(minCostValue, cost + minCost(j, mainStr, substrings, memo));
    }

    // Store the result for this index in the memoization map
    // memo[index] = minCostValue;

    return minCostValue;
}

int main() {
    // Input
    int N;  // Number of substrings
    cin >> N;


    vector<pair<string, int>> substrings(N);  // Store substrings and their costs

    for (int i = 0; i < N; ++i) {
        cin >> substrings[i].first >> substrings[i].second;
    }

    string mainStr;
    cin >> mainStr;
    // Memoization map to store the results of subproblems
    unordered_map<int, int> memo;

    // Call the recursive function starting from index 0
    int result = minCost(0, mainStr, substrings, memo);

    // Output the result
    cout << result << endl;

    return 0;
}
