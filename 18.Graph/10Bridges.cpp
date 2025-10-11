
#include <bits/stdc++.h>
using namespace std;
// 🔑 What are Bridges in a Graph?

// A bridge (also called a cut-edge) in an undirected graph is an edge that, if removed, increases the number of connected components of the graph.
// In other words:
// A bridge is a "critical connection."
// Removing it disconnects some part of the graph.
// Depth First Search function to find bridges using Tarjan's Algorithm
// ⚡ Tarjan’s Algorithm Idea (used in your code)
// We use DFS with discovery time & low time:
// disc[node]: The time when the node was discovered (DFS entry time).
// low[node]: The earliest discovered node reachable from this node (via back-edges).

void dfs(int node, int parent, int &timer, vector<int>& disc, vector<int>& low, 
         vector<vector<int>>& result, unordered_map<int, list<int>>& adj, 
         unordered_map<int, bool>& vis) {
    
    vis[node] = true;           // Mark the node as visited
    disc[node] = low[node] = timer++; // Initialize discovery and low time
    
    for (auto nbr : adj[node]) { // Traverse all adjacent nodes
        if (nbr == parent) {
            continue; // Skip the edge leading to parent
        }

        if (!vis[nbr]) { // If the neighbor is unvisited, perform DFS
            dfs(nbr, node, timer, disc, low, result, adj, vis);
            low[node] = min(low[node], low[nbr]); // Update low value

            // Check if the edge (node, nbr) is a bridge
            if (low[nbr] > disc[node]) {
                result.push_back({node, nbr});
            }
        } 
        else { // If neighbor is already visited, update low[node]
            low[node] = min(low[node], disc[nbr]);
        }
    }
}

// Function to find bridges in an undirected graph
vector<vector<int>> findBridges(vector<vector<int>>& edges, int v, int e) {
    unordered_map<int, list<int>> adj; // Adjacency list representation

    // Build adjacency list
    for (int i = 0; i < edges.size(); i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Initialize discovery and low arrays
    int timer = 0;
    vector<int> disc(v, -1);
    vector<int> low(v, -1);
    unordered_map<int, bool> vis; // Visited array

    vector<vector<int>> result; // Stores bridges

    // Run DFS for each component
    for (int i = 0; i < v; i++) {
        if (!vis[i]) {
            dfs(i, -1, timer, disc, low, result, adj, vis);
        }
    }

    return result; // Return the list of bridges
}
// #include<vector>
// void dfs(int node ,int parent,int &timer, vector<int>&disc(v), vector<int>&low(v), vector<vector<int>> &result,unordered_map<int,list<int>>&adj,unordered-map<int,bool>&vis){
//     vis[node]=true;
//     disc[node]=low[node]=timer++;
//     for(auto nbr :adj[node]){
//         if(nbr==parent){
//             continue;
//         }
//         if(!vis[nbr]){
//             dfs(nbr,node,timer,disc,low,result,adj,vis);
//             low[node]=min(low[node],low[nbr]);
//             // check edge is bridge
//             if(low[nbr]>disc[node]){
//                 vector<int>ans;
//                 ans.push_back(node);
//                 ans.push_back(nbr);
//                 result.push_back(ans);
//             }
//         }
//         //tc=0(n+e);
//         //s.c=o(n);
//     }
// }
// vector<vector<int>>findbridges(vector<vector<int>> &edges,int v,int e){
//     //adj list
//     unordered_map<int,list<int>>adj;

//     for(int i=0;i<edges.size();i++){
//         int u=edges[i][0];
//         int v=edges[i][1];
//         adj[u].puah_back(v);
//         adj[v].push_back(u);

//     }
//     int timer=0;
//     vector<int>disc(v);
//     vector<int>low(v);
//     int parent=-1;
//     unordered-map<int,bool>vis;
//     for(int i=0;i<v;i++){
// disc[i]=-1;
// low[i]=-1;
//     }
//     //dfs
//     vector<vector<int>> result;
//     for(!vis[i]){
//         dfs(i,parent,timer,disc,low,result,vis);
//     }
//     }
//     return result;

// }