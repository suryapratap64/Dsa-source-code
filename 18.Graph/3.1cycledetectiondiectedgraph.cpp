#include <bits/stdc++.h>
using namespace std;

// DFS-based Cycle Detection in Directed Graph
bool isCyclicDFS(int node, unordered_map<int, bool>& visited, unordered_map<int, bool>& recStack, unordered_map<int, list<int>>& adj) {
    visited[node] = true;
    recStack[node] = true;

    for (auto neighbour : adj[node]) {
        if (!visited[neighbour]) {
            if (isCyclicDFS(neighbour, visited, recStack, adj)) {
                return true;
            }
        } else if (recStack[neighbour]) {
            return true; // Cycle detected
        }
    }

    recStack[node] = false; // remove from recursion stack
    return false;
}

// Main function to detect cycle in a directed graph
string cycleDetectionDirected(int n, vector<vector<int>>& edges) {
    unordered_map<int, list<int>> adj;
    for (auto edge : edges) {
        int u = edge[0];
        int v = edge[1];
        adj[u].push_back(v); // directed edge u -> v
    }

    unordered_map<int, bool> visited;
    unordered_map<int, bool> recStack;

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            if (isCyclicDFS(i, visited, recStack, adj)) {
                return "Yes"; // cycle exists
            }
        }
    }
    return "No"; // no cycle
}

int main() {
    vector<vector<int>> edges = {
        {0, 1}, {1, 2}, {2, 0}, {3, 4} // Example graph
    };
    int n = 5; // number of vertices

    cout << cycleDetectionDirected(n, edges) << endl; // Output: Yes
    return 0;
}
