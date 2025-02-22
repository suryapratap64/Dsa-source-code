#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>
using namespace std;

// DFS function to explore a connected component
void dfs(int node, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj, vector<int> &component) {
    component.push_back(node);
    visited[node] = true;

    // Recursive call for all connected nodes
    for (auto i : adj[node]) {
        if (!visited[i]) {
            dfs(i, visited, adj, component);
        }
    }
}

// Function to perform DFS on the graph
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges) {
    // Prepare adjacency list
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < edges.size(); i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<vector<int>> ans;         // To store all connected components
    unordered_map<int, bool> visited; // To track visited nodes

    // Traverse all vertices to find components
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            vector<int> component; // Store one connected component
            dfs(i, visited, adj, component);
            ans.push_back(component);
        }
    }

    return ans;
}

// Main function with example usage
int main() {
    int V = 7; // Number of vertices
    int E = 6; // Number of edges
    vector<vector<int>> edges = {
        {0, 1}, {0, 2}, {1, 3}, {1, 4}, {2, 5}, {2, 6}}; // Graph edges

    vector<vector<int>> result = depthFirstSearch(V, E, edges);

    cout << "DFS Connected Components:" << endl;
    for (auto component : result) {
        for (int node : component) {
            cout << node << " ";
        }
        cout << endl;
    }

    return 0;
}

// void dfs(int node, unordered_map<int, bool> &visited, unordered_map < int, list<int> &adj, vector<int> &component)
// {
//     component.push_back(node);
//     visited[node] = true;
//     // har connective node ke liye ecursive call
//     for (auto i : adj[node])
//     {
//         if (!visted[i])
//         {
//             dfs(i, visited, adj, component);
//         }
//     }
// }

// vector<vector<int>> depthfirstsearch(int V, int E, vector<vector<int>> edges)
// {
//     // preapre adjlist
//     unordered_map < int, list<int> adj;
//     for (int i = 0; i < edges.size(); i++)
//     {
//         int u = edges[i][0];
//         int v = edges[i][1];
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     vector<vector<int>> ans;
//     unordered_map<int, bool> visited;
//     for (int i = 0; i < V, i++)
//     {
//         if (!visited[i])
//         {
//             vector<int> component;
//             dfs(i, visited, adjlist, component);
//             ans.push_back(component);
//         }
//     }
// }