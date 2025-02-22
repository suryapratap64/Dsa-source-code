#include <bits/stdc++.h>
using namespace std;

#define INF 1e9 // Large value to represent infinity

int bellmanFord(int n, int m, int src, int dest, vector<vector<int>>& edges) {
    vector<int> dist(n + 1, INF); // Distance array initialized to "infinity"
    dist[src] = 0; // Distance to the source is 0

    // **Step 1: Relax all edges (n-1) times**
    for (int i = 1; i < n; i++) { // We run (n-1) times
        for (int j = 0; j < m; j++) { // Iterate through all edges
            int u = edges[j][0]; // Start node of the edge
            int v = edges[j][1]; // End node of the edge
            int wt = edges[j][2]; // Weight of the edge

            // **Relaxation condition**
            if (dist[u] != INF && dist[u] + wt < dist[v]) {
                dist[v] = dist[u] + wt;
            }
        }
    }

    // **Step 2: Check for Negative Weight Cycle**
    for (int j = 0; j < m; j++) {
        int u = edges[j][0];
        int v = edges[j][1];
        int wt = edges[j][2];

        if (dist[u] != INF && dist[u] + wt < dist[v]) {
            return -1; // **Negative weight cycle detected**
        }
    }

    // **If no negative cycle, return the shortest distance to destination**
    return (dist[dest] == INF) ? -1 : dist[dest];
}

// int bellmanford(int n,int m,int dest,,vector<vector<int>>&edges){
//     vector<int>dist(n+1,le9);

//     dist[src]=0;
//     for(int i=1;i<=n;i++){
//         //traverse on edge list
//         for(int j=0;j<m;j++){
//             int u=edges[j][0];
//             int v=edges[j][0];
//             int wt=edges[j][2];
//             if(dist[u]!=le9 &&(dist[u]+wt)<dist[v] ){
//                 dist[v]=dist[u]+wt;
//             }

//         }
//     }
//     //check for negative cycle
//     bool flag=0;
//     for(int j=0;j<n;j++){
//         int u=edges[j][0];
//         int v=edges[j][1];
//         int wt=edges[j][2];
//         if(dist[u]!=le9 && ((dist[u]+wt)<dist[v])){
//             flag=1;
//         }
//     }
//     if(flag==0){
//         return dist[dest];

//     }
//     //tc=n*m;
//     return -1;
// }