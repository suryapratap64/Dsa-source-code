#include <bits/stdc++.h>
using namespace std;

class Graph {
public:
    // Adjacency list representation for weighted graph
    unordered_map<int, list<pair<int, int>>> adj;

    // Function to add a directed edge with a weight
    void addedge(int u, int v, int weight) {
        pair<int, int> p = make_pair(v, weight);
        adj[u].push_back(p);
    }

    // Function to print the adjacency list
    void printadj() {
        for (auto i : adj) {
            cout << i.first << " -> ";
            for (auto j : i.second) {
                cout << "(" << j.first << ", " << j.second << ") ";
            }
            cout << endl;
        }
    }

    // Depth First Search (DFS) function to perform topological sorting
    void dfs(int node, unordered_map<int, bool> &vis, stack<int> &topo) {
        vis[node] = true;
        // Visit all neighbors of the current node
        for (auto neighbour : adj[node]) {
            if (!vis[neighbour.first]) {
                dfs(neighbour.first, vis, topo);
            }
        }
        // Push the node to the stack after visiting all its neighbors
        topo.push(node);
    }

    // Function to calculate the shortest path in the graph from a source node
    void getshortestpath(int src, vector<int> &dis, stack<int> &topo) {
        // Initialize the distance of the source to 0
        dis[src] = 0;

        // Process nodes in topological order
        while (!topo.empty()) {
            int top = topo.top();
            topo.pop();

            // If the distance to the current node is not infinity, update its neighbors
            if (dis[top] != INT_MAX) {
                for (auto i : adj[top]) {
                    // Relax the edge
                    if (dis[top] + i.second < dis[i.first]) {
                        dis[i.first] = dis[top] + i.second;
                    }
                }
            }
        }
    }
};

int main() {
    Graph g;

    // Add edges to the graph
    g.addedge(3, 5, 3);
    g.addedge(2, 5, 6);
    g.addedge(7, 3, 5);
    g.addedge(5, 0, 3);
    g.addedge(1, 9, 4); // Node 9 is unreachable for n=6
    g.addedge(0, 13, 4); // Node 13 is unreachable for n=6

    // Print the adjacency list
    cout << "Adjacency List:" << endl;
    g.printadj();

    // Number of nodes
    int n = 6;

    // Map to keep track of visited nodes during DFS
    unordered_map<int, bool> visited;

    // Stack to store nodes in topological order
    stack<int> s;

    // Perform DFS for all components of the graph to generate the topological order
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            g.dfs(i, visited, s);
        }
    }

    // Source node for shortest path
    int src = 1;

    // Distance vector to store the shortest path distances from the source
    vector<int> dist(n, INT_MAX);

    // Get the shortest path from the source node using topological order
    g.getshortestpath(src, dist, s);

    // Print the shortest path results
    cout << "Shortest paths from node " << src << ":" << endl;
    for (int i = 0; i < dist.size(); i++) {
        if (dist[i] == INT_MAX) {
            cout << "INF "; // Node is unreachable
        } else {
            cout << dist[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// class Graph
// {
// public:
//     unordered_map<int, list<pair<int, int>>> adj;
//     void addedge(int u, int v, int weight)
//     {
//         pair<int, int> p = make_pair(v, weight);
//         adj[u].push_back(p);


//     }
//     void printadj(){
//         for(auto i:adj){
//             cout<<i.first<<"->";
//             for(auto j:i.second){
//                 cout<<"("<<j.first<<","<<j.second<<")";

//              }
//              cout<<endl;
//         }
//     }
//     void dfs(int node,unordered_map<int,bool>&vis,stack<int>&topo){
//         vis[node]=true;
//         for(auto neighbour:adj[node]){
//             if(!vis[neighbour.first]){
//                 dfs(neighbour.first,vis,topo);
//             }
//         }
//         topo.push(node);
//     }
//     void getshortestpath(int src,vector<int>&dis, stack<int> &topo){
//         dis[src]=0;
//         while(!topo.empty()){
//             int top=topo.top();
//             topo.pop();
//             if(dis[top]!=INT_MAX){
//                 for(auto i:adj[top]){
//                     if(dis[top]+i.second<dis[i.first]){
//                         dis[i.first]=dis[top]+i.second;

//                     }
//                 }


//             }
//         }
//     }
// };
//  int main()
// {
//     Graph g;
//     g.addedge(3,5,3);
//      g.addedge(2,5,6);
//      g.addedge(7,3,5);
//      g.addedge(5,0,3);
//      g.addedge(1,9,4);
//      g.addedge(0,13,4);
     

//   g.printadj();  
//   int n=6;
//   unordered_map<int,bool>visited;
//   stack<int>s;
//   for(int i=0;i<n;i++){
//     if(!visited[i]){
//         g.dfs(i,visited,s);

//     }
    
//   } 
//   int src=1;
//   vector<int>dist(n);
//   for(int i=0;i<n;i++){
//     dist[i]=INT_MAX;
//     g.getshortestpath(src,dist,s);
//     cout<<"ans is"<<endl;
//     for(int i=0;i<dist.size();i++){
//         cout<<dist[i]<<" ";

//     }
//     cout<<endl;
//   }
//     return 0;
// }