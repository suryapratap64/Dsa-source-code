#include <iostream>
#include <unordered_map>
#include <list>
#include <stack>
#include <vector>
using namespace std;

// Helper function for DFS and topological sort
void toposort(int node, unordered_map<int, bool> &visited, stack<int> &s, unordered_map<int, list<int>> &adj) {
    visited[node] = true;

    // Visit all neighbors
    for (auto neighbour : adj[node]) {
        if (!visited[neighbour]) {
            toposort(neighbour, visited, s, adj);
        }
    }

    // Push current node to the stack after visiting all neighbors
    s.push(node);
}

// Function to perform topological sorting
vector<int> topologicalSort(vector<vector<int>> &edges, int V, int E) {
    // Create adjacency list
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < E; i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
    }

    // Initialize visited map and stack
    unordered_map<int, bool> visited;
    stack<int> s;

    // Call DFS for all components
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            toposort(i, visited, s, adj);
        }
    }

    // Prepare the result by popping elements from the stack
    vector<int> ans;
    while (!s.empty()) {
        ans.push_back(s.top());
        s.pop();
    }

    return ans;
}

// Main function with example usage
int main() {
    int V = 6; // Number of vertices
    int E = 6; // Number of edges
    vector<vector<int>> edges = {
        {5, 0}, {5, 2}, {4, 0}, {4, 1}, {2, 3}, {3, 1}}; // Directed Acyclic Graph (DAG)

    vector<int> result = topologicalSort(edges, V, E);

    cout << "Topological Sort Order: ";
    for (int node : result) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
// void toposort(int node , unordered_map<int,bool>&visited,unordred_map<int,list<int>>&adj){
//     visited[node]=1;
//  for(auto neighbour: adj([node])){
// if(!visted[neighbour]){
// toposort(neighbour,visited,s,adj);

// }
// s.push(node);
 
// }
// //for problem unordered amp kijagah vector bhoi kar sate hai
// vector<int>topologicalsort(vector <vector<int>>&edges,int v,int e){
//     //creating adj list
//     unordred_map<int,list<int>>adj;
//     for(int i=0;i<e;i++){
//         int u=edges[i][0];
//         int v=edges[1][0];
//         adl[u].push_back(v);

//     }
//     //call dfs topological sort until funtion alll components 
//    ;
//     stack<int>s;
//     for(int i=0;i<n;i++){
//         if(!visited[i]){
// toposort(i,visited,s,adj);
//         }
//     }
//     unordered_nap<int,bool>visited;

//     vector <int>ans;
//     while(!empty()){
//         ans.push_back.top();
//         s.pop();
//         return ans;

// }


// }