// 🔹 What is it?

// Kahn’s Algorithm is a BFS-based algorithm used to produce a topological ordering of a Directed Acyclic Graph (DAG).

// A topological order of a DAG is a linear ordering of its vertices such that for every directed edge u → v, vertex u comes before v in the order.
vector<int> topologicalSort(vector<vector<int>> &edges, int V, int E) {
    // Create adjacency list
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < E; i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
    }

    // Calculate in-degrees for all vertices
    vector<int> indegree(V, 0);
    for (auto i : adj) {
        for (auto j : i.second) {
            indegree[j]++;
        }
    }

    // Push all vertices with in-degree 0 into the queue
    queue<int> q;
    for (int i = 0; i < V; i++) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }

    // Perform BFS-like process for topological sorting
    vector<int> ans;
    while (!q.empty()) {
        int front = q.front();
        q.pop();
        ans.push_back(front);

        // Decrease in-degree of neighbors
        for (auto neighbour : adj[front]) {
            indegree[neighbour]--;
            if (indegree[neighbour] == 0) {
                q.push(neighbour);
            }
        }
    }

    return ans; // Contains topological order
}

// vector<int>topological(vector<vector<int>>&edges,int v,int e){
//     //creating adj list 
//      unordered_map<int,list<int>>adj;
//     for(int i=0;i<e;i++){
//         int u=edges [i][0];
//         int v=edges[i][1];
//         adj[u].push_back(v);

//     }
//     //find all  indegree
//     vector<int >indegree(v);
//     for(auto i:adj){
//         for(auto j:i.sedcond){
//             indegree[j]++;
//         }
//     }
//     //0degree walo ko push karo
//     queue <int>q;
//     for(int i=0;i<v;i++){
//         if(indegree[i]==0){
//             q.push(i);
//         }
//     }
//     //do bfs
//     ans.push_back(front);
//     //neighbour indegree update 
//     for (auto neighbour:adj[front ]){
//         indegree[neighbour]--;
//         if(indegree[neighbour]==0){
//           q.push(neighbour);  
//         }

//     }
// }

