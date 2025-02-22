#include <iostream>
#include <unordered_map>
#include <set>
#include <queue>
#include <vector>
using namespace std;

// Function to prepare adjacency list from edges
void prepareAdjList(unordered_map<int, set<int>> &adjlist, vector<pair<int, int>> &edges) {
    for (int i = 0; i < edges.size(); i++) {
        int u = edges[i].first;
        int v = edges[i].second;
        adjlist[u].insert(v);
        adjlist[v].insert(u);
    }
}

// BFS Traversal Function
void bfs(unordered_map<int, set<int>> &adjlist, unordered_map<int, bool> &visited, vector<int> &ans, int node) {
    queue<int> q;
    q.push(node);
    visited[node] = true;

    while (!q.empty()) {
        int frontNode = q.front();
        q.pop();

        // Store the front node in the answer
        ans.push_back(frontNode);

        // Traverse all neighbors of the front node
        for (auto i : adjlist[frontNode]) {
            if (!visited[i]) {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

// BFS function to return the traversal order
vector<int> BFS(int vertex, vector<pair<int, int>> edges) {
    unordered_map<int, set<int>> adjlist; // Adjacency list
    vector<int> ans;                     // Resulting BFS order
    unordered_map<int, bool> visited;    // Visited map

    // Prepare the adjacency list
    prepareAdjList(adjlist, edges);

    // Traverse all components of the graph
    for (int i = 0; i < vertex; i++) {
        if (!visited[i]) {
            bfs(adjlist, visited, ans, i);
        }
    }

    return ans;
}

// Main function with example usage
int main() {
    int vertex = 7; // Number of vertices (0-based indexing)
    vector<pair<int, int>> edges = {
        {0, 1}, {0, 2}, {1, 3}, {1, 4}, {2, 5}, {2, 6}}; // Graph edges

    vector<int> result = BFS(vertex, edges);

    cout << "BFS Traversal Order: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

// void prepareadlist(unordered_map<int, set<int>> &adjlist, vector<pair<int, int>> &edges)
// {
//     for (int i = 0; i < edge.size(); i++)
//     {
//         int u = edges[i].first;
//         int v = edges[i].second;
//         adjlist[u].insert(v);
//         adjlist[v].insert(u);
//     }
// }
// void bfs((unordered_map<int ,set<int>>&adjlist,)unordered_map<int,bool>&vidited,vector<int>&ans,int node)
// {

//     queue<int> q;
//     q.push(node);
//     visited[node] == 1;
//     while (!q.empty())
//     {
//         int frontnode.front();
//         q.pop();
//         // store front node into ans
//         ans.push_back(frontnode);
//         // traversal  all neighbour nodes
//         for (auto i : adjlist[frontnode])
//         {
//             if (!visited[i])
//             {
//                 q.push(i);
//                 visited[i] = 1;
//             }
//         }
//     }
// }
// // void printadj(unordered_map<int,list<int>>&adjlist){
// //     for(auto i:adjlist){
// //         cout<<i.first<<"->";
// //         for(auto j:i.second){
// //             cout<<j<<",";

// //         }
// //         cout<<endl;
// //     }
// // }
// vector<int> BFS(int vertex, vector<pair<int, int>> edges)
// {
//     unordere_map<int, list<int>> adjlsit;
//     vector<int> and;
//     unordere_map<int, bool> visited;
//     preapreadjlist(adjlist, edges);
//     printadj(adjlist);
//     ////traversal all elment of graph
//     for (int i = 0; i < vertex; i++)
//     {
//         if (!visited[i])
//         {
//             bfs(adjlist, vidited, ans, i);
//         }
//     }
// }