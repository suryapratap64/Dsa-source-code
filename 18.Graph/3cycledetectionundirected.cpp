#include <bits/stdc++.h>
using namespace std;

// BFS Cycle Detection
bool iscyclicBFS(int src, unordered_map<int, bool>& visited, unordered_map<int, list<int>>& adj) {
    unordered_map<int, int> parent;
    parent[src] = -1;
    visited[src] = true;
    
    queue<int> q;
    q.push(src);

    while (!q.empty()) {
        int front = q.front();
        q.pop();

        for (auto neighbour : adj[front]) {
            if (visited[neighbour] && neighbour != parent[front]) {
                return true; // Cycle detected
            } else if (!visited[neighbour]) {
                q.push(neighbour);
                visited[neighbour] = true;
                parent[neighbour] = front;
            }
        }
    }
    return false;
}

// DFS Cycle Detection
bool iscyclicDFS(int node, int parent, unordered_map<int, bool>& visited, unordered_map<int, list<int>>& adj) {
    visited[node] = true;

    for (auto neighbour : adj[node]) {
        if (!visited[neighbour]) {
            if (iscyclicDFS(neighbour, node, visited, adj)) {
                return true;
            }
        } else if (neighbour != parent) {
            return true; // Cycle detected
        }
    }
    return false;
}

// Main Cycle Detection Function
string cycledetection(vector<vector<int>>& edges, int n, int m) {
    unordered_map<int, list<int>> adj;

    // Create adjacency list
    for (int i = 0; i < m; i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    unordered_map<int, bool> visited;

    // Check for cycles in all components
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            if (iscyclicBFS(i, visited, adj)) {
                return "Yes";
            }
        }
    }
    return "No";
}

int main() {
    vector<vector<int>> edges = {{0, 1}, {1, 2}, {2, 0}, {3, 4}}; // Example graph
    int n = 5, m = edges.size();
    cout << cycledetection(edges, n, m) << endl;
    return 0;
}


// bool iscyclicBFs(int src,unordered_map<int,bool>&visited,unordered_map<int,list<int>>&ans,){
//     unordered_map<int,int>parent;
//     parent[src]=-1;
//     visited[src]=1;
//     queue<int>q;
//     q.push(src);
//     while(!q.empty()){
//         int front =q.node();
//         q.pop();
//         for(auto neighbour:adj[front]){
//             if(visited[neighbour]==true && neighbour!=parent[front]){
//                 return true;

//             }
//             else if(!visited[neighbour]){
//                 q.push(neighbour);
//                 visited[neighbour]=1;
//                 parent[neighbour]=front;
//             }
//         }

//     }
//     return false;

    
    
    
//     }

// //dfs detection cyclic in graph
// bool iscyclicDFS(int node,int parent,unordered_map<int,bool>&visited,unordered_amp<int,list<int>adj){
//     visited[node]=true;
//     for(auto neighbour:adj[node]){
//         if(!visited[neighbour]){
//             bool cycledetected=iscyclicDFS(neighbour,node,visited,adj);
//             if(cycleDetected){
//                 return true;

//             }
//             else if(neighbour!=parent){
//                 //cucle present
//                 return true;
//             }
//             return false;
//         }
//     }

// } 

// stirng cycledetection(vector<vector<int>>& edges,int n,int m){
//     //create adjancy list
//     unordered_map<int,list<int>>adj;
//     for(int i=0;i<m;i++){
//     int u=edges[i][0];
//     int v=edges[i][1];
//     adj[u].push_back(v);
//     adj[v].push_back(u);
//     if(!visited[i]){
//         bool ans=iscyclicBFS(i,visited,adj);
//         if(ans==1){
//             return "yes";
//         }
//     }
//     return "no";
//     }
// }



