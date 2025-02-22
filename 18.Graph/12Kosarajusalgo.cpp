#include <bits/stdc++.h>
using namespace std;

// Depth First Search function to find bridges using Tarjan's Algorithm
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

// void dfs(int node, unordered_map<int,bool>&vis,stack<int>&st, unordered_map<int,list<int>>&adj){
//     vis[node]=true;
//     for(auto nbr;adj[node]){
//         if(!vis[nbr]){
//             dfs (nbr,vis,st,adj);
//         }
//     }
//    //topo logic
//    st.push(node);
   

// }

// void revdfs(int node, unordered_map<int,bool>&vis, unordered_map<int,list<int>>&adj)
// {
//     vis[node]=true;
//     for(auto nbr:adj[node]){
//         if(!vis[nbr]){
//             revdfs(nbr,vis,adj);
//         }
//     }

// }


// int stronglyconnected(int v,vector<vector<int>>&edges){
//     //adj
//     unordered_map<int,list<int>>adj;
//     for(int i-0;i<edges.size();i++){
//         int u=edges[i][0];
//         int v=edges[i][1];
//         adj[u].push_back(v);

//     }
//     //topo sort
//     stack<int>st;
//     unordered_map<int,bool>vis;
//     for(int i=0;i<v;i++){
//         if(!vis[i]){
//             dfs(i,vis,st,adj);

//         }
//     }
//     //create a trnspose graph
//     unordered_map<int,list<int>>transpose;
//     for(int i=0;i<v;i++){

//         for(auto nbr:adj[i]){
//             transpose[nbr].push_back(i);
//         }
//     }
//     //dfs call suing above ordering
//     int count=0;
//     while(!st.empty()){
//         int top=st.top();
//         st.pop();
//         if(!vis[top]){ 
//             count++;
//             revdfs(top,vis,transpose);
//         }
//     }
//     return count;

// }