#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> printAdjacency(int n, int m, vector<vector<int>> &edges)
{
    vector<vector<int>> ans(n);

    // build adjacency list
    for (int i = 0; i < m; i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        ans[u].push_back(v);
        ans[v].push_back(u); // undirected
    }

    vector<vector<int>> adj(n);
    for (int i = 0; i < n; i++) {
        adj[i].push_back(i); // start with the node
        for (int j = 0; j < ans[i].size(); j++) {
            adj[i].push_back(ans[i][j]);
        }
    }

    return adj;
}

int main() {
    int n = 5, m = 4;
    vector<vector<int>> edges = {{0,1}, {0,2}, {1,3}, {3,4}};

    vector<vector<int>> adj = printAdjacency(n, m, edges);

    for (auto &row : adj) {
        for (int x : row) cout << x << " ";
        cout << "\n";
    }
}
