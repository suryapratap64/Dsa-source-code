#include <bits/stdc++.h>
using namespace std;

vector<int> dijkstra(int vertices, vector<vector<int>> &edges, int source) {
    // Step 1: Create adjacency list
    unordered_map<int, list<pair<int,int>>> adj;
    for (auto &e : edges) {
        int u = e[0], v = e[1], w = e[2];
        adj[u].push_back({v, w});
        adj[v].push_back({u, w}); // remove this if graph is directed
    }

    // Step 2: Distance array
    vector<int> dist(vertices, INT_MAX);
    dist[source] = 0;

    // Step 3: Min-heap (priority queue) => {distance, node}
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0, source});

    // Step 4: Process nodes
    while (!pq.empty()) {
        auto [d, node] = pq.top();
        pq.pop();

        // Skip if we already found a shorter path
        if (d > dist[node]) continue;

        // Explore neighbors
        for (auto &[nbr, weight] : adj[node]) {
            if (dist[node] + weight < dist[nbr]) {
                dist[nbr] = dist[node] + weight;
                pq.push({dist[nbr], nbr});
            }
        }
    }

    return dist;
}

int main() {
    int vertices = 5;
    vector<vector<int>> edges = {
        {0,1,2}, {0,2,4}, {1,2,1}, {1,3,7}, {2,4,3}, {3,4,2}
    };

    int source = 0;
    vector<int> result = dijkstra(vertices, edges, source);

    cout << "Shortest distances from source " << source << ":\n";
    for (int i = 0; i < vertices; i++) {
        cout << "Node " << i << " : " << result[i] << "\n";
    }
}

// vector<int >dijkstra(vector<vector<int >>&vec,int vertices,int edges,int source){
//     // creating adjancy list
//     unordered_map<int,list<pair<int ,int>>>adj;
//     for(int i=0;i<edges;i++){
//         int u=vec[i][0];
//         int v=vec[i][1];
//         int w=vec[i][2];
//         adj[u].push_back(make_pair(v,w));
//         adj[v].push_back(make_pair(u,w));

//     } 
//     //creation distance array with infinite vale infinatally
//     vector<int >dist(vertices);
//     for(int i=0;i<vertices;i++){
//         dist[i]=INT_MAX;
//         //creation of set on the basis of (diatance,node) 
//           set<pair<int,int>>st;
//         //initialise distance with source node
//         dist[source]=0;
//         st.insert(make_pair(0,source));
//         while(!st.empty()){
//             //fetch top record
//             auto top=*(st.begin());
//             int nodedistance=top.first;
//             int topnode=top.second;
//             //record top record now
//             st.erase(st.begin());
//             //traversing on neighbours
//             for(auto neighbour:adj[topnode]){
//                 if(nodedistance+neighbour.second<dist[neighbour.first]){
//                     auto record=st.find(make_pair(dist[neighbour.first],neighbour.first));
//                     //if record found then erase it
//                     if(record !=st.end()){
//                         st.erase(f);
//                     }
//                     //distance update
//                     dist[neighbour.first]=nodedistance+neighbour.second;
//                     //record push in set;
//                     st.insert(make_pair(dist[neighbour.first],neighbour.first));
//                 }
//             }
//         }

// return dist;
//     }
// }