#include <bits/stdc++.h>
using namespace std;

// Function to initialize the Disjoint Set Union (DSU) data structure
void makeSet(vector<int>& parent, vector<int>& rank, int n) {
    for (int i = 0; i < n; i++) {
        parent[i] = i; // Each node is its own parent initially
        rank[i] = 0;   // Rank (height of tree) starts as 0
    }
}
// ⚡ Tarjan’s Algorithm Idea (used in your code)

// We use DFS with discovery time & low time:

// disc[node]: The time when the node was discovered (DFS entry time).

// low[node]: The earliest discovered node reachable from this node (via back-edges).
// Function to find the parent (or representative) of a set using Path Compression
int findParent(vector<int>& parent, int node) {
    if (parent[node] == node) {
        return node; // If node is its own parent, return itself
    }
    return parent[node] = findParent(parent, parent[node]); // Path Compression
}

// Function to perform union of two sets using Union by Rank
void unionSet(int u, int v, vector<int>& parent, vector<int>& rank) {
    u = findParent(parent, u); // Find representative of set containing u
    v = findParent(parent, v); // Find representative of set containing v

    if (u != v) { // Only merge if they belong to different sets
        if (rank[u] < rank[v]) {
            parent[u] = v; // Attach smaller rank tree under larger rank tree
        } 
        else if (rank[v] < rank[u]) {
            parent[v] = u;
        } 
        else { 
            parent[v] = u; // If both have the same rank, merge one under another
            rank[u]++; // Increase the rank of the new root
        }
    }
}

// Comparator function to sort edges by weight in ascending order
bool cmp(vector<int>& a, vector<int>& b) {
    return a[2] < b[2]; // Sort edges based on weight (3rd element in vector)
}

// Function to find the Minimum Spanning Tree (MST) using Kruskal's Algorithm
int minimumSpanningTree(vector<vector<int>>& edges, int n) {
    sort(edges.begin(), edges.end(), cmp); // Sort edges based on weight

    vector<int> parent(n); // Parent array for DSU
    vector<int> rank(n);   // Rank array for DSU
// Disjoint Set Union (Union-Find)
    makeSet(parent, rank, n); // Initialize DSU

    int minWeight = 0; // Variable to store total MST weight

    for (int i = 0; i < edges.size(); i++) {
        int u = findParent(parent, edges[i][0]); // Find representative of u
        int v = findParent(parent, edges[i][1]); // Find representative of v
        int wt = edges[i][2]; // Weight of edge

        if (u != v) { // If adding this edge does not form a cycle
            minWeight += wt; // Add edge weight to MST total
            unionSet(u, v, parent, rank); // Merge sets
        }
    }

    return
