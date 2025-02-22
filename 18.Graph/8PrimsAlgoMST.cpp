#include <bits/stdc++.h>
using namespace std;
//chat gpt
vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> edges) {
    // Adjacency list representation of graph
    vector<vector<pair<int, int>>> adj(n + 1);  // 1-based indexing

    // Build adjacency list
    for (auto &edge : edges) {
        int u = edge.first.first;
        int v = edge.first.second;
        int weight = edge.second;
        adj[u].push_back({v, weight});
        adj[v].push_back({u, weight});  // Since it's an undirected graph
    }

    // Min-heap priority queue (weight, node, parent)
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

    vector<bool> inMST(n + 1, false);  // Track included nodes
    vector<pair<pair<int, int>, int>> MST;  // Store MST edges

    // Start from node 1 (assuming 1-based indexing)
    pq.push({0, {1, -1}});  // {weight, {node, parent}}

    while (!pq.empty()) {
        auto top = pq.top();
        pq.pop();
        int weight = top.first;
        int node = top.second.first;
        int parent = top.second.second;

        // If node is already included, skip
        if (inMST[node]) continue;

        // Mark node as included in MST
        inMST[node] = true;

        // If not the starting node, add to MST
        if (parent != -1) {
            MST.push_back({{parent, node}, weight});
        }

        // Explore neighbors
        for (auto &neighbor : adj[node]) {
            int adjNode = neighbor.first;
            int edgeWeight = neighbor.second;

            if (!inMST[adjNode]) {
                pq.push({edgeWeight, {adjNode, node}});
            }
        }
    }

    return MST;
}
