1) Unweighted graph (adjacency list)
#include <bits/stdc++.h>
using namespace std;

struct Graph {
    int n;                            // number of nodes (0..n-1)
    vector<vector<int>> adj;          // adjacency list

    Graph(int n): n(n), adj(n) {}

    void addEdge(int u, int v, bool undirected = true) {
        adj[u].push_back(v);
        if (undirected) adj[v].push_back(u);
    }

    // BFS from source
    vector<int> bfs(int src) const {
        vector<int> dist(n, -1);
        queue<int> q;
        dist[src] = 0; q.push(src);
        while (!q.empty()) {
            int u = q.front(); q.pop();
            for (int v : adj[u]) if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
        return dist; // distance from src; -1 = unreachable
    }

    // DFS (recursive)
    void dfsRec(int u, vector<int>& vis, vector<int>& order) const {
        vis[u] = 1;
        order.push_back(u);
        for (int v : adj[u]) if (!vis[v]) dfsRec(v, vis, order);
    }
    vector<int> dfs(int src) const {
        vector<int> vis(n, 0), order;
        dfsRec(src, vis, order);
        return order;
    }

    // DFS (iterative)
    vector<int> dfsIter(int src) const {
        vector<int> vis(n, 0), order;
        stack<int> st; st.push(src);
        while (!st.empty()) {
            int u = st.top(); st.pop();
            if (vis[u]) continue;
            vis[u] = 1; order.push_back(u);
            for (int v : adj[u]) if (!vis[v]) st.push(v);
        }
        return order;
    }
};

int main() {
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,3);
    g.addEdge(2,4);

    auto dist = g.bfs(0);        // shortest edges count from 0
    auto order1 = g.dfs(0);      // recursive order
    auto order2 = g.dfsIter(0);  // iterative order

    // print results
    cout << "Distances from 0:\n";
    for (int i = 0; i < 5; ++i) cout << i << ": " << dist[i] << "\n";

    cout << "DFS recursive order: ";
    for (int x: order1) cout << x << " ";
    cout << "\nDFS iterative order: ";
    for (int x: order2) cout << x << " ";
    cout << "\n";
}

2) Weighted graph (adjacency list) + Dijkstra
#include <bits/stdc++.h>
using namespace std;

struct WGraph {
    int n;
    vector<vector<pair<int,int>>> adj; // (neighbor, weight)

    WGraph(int n): n(n), adj(n) {}

    void addEdge(int u, int v, int w, bool undirected = true) {
        adj[u].push_back({v,w});
        if (undirected) adj[v].push_back({u,w});
    }

    // Dijkstra: shortest path from src (non-negative weights)
    vector<long long> dijkstra(int src) const {
        const long long INF = (1LL<<60);
        vector<long long> dist(n, INF);
        priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<>> pq;
        dist[src] = 0; pq.push({0, src});
        while (!pq.empty()) {
            auto [d,u] = pq.top(); pq.pop();
            if (d != dist[u]) continue;
            for (auto [v,w] : adj[u]) {
                if (dist[v] > d + w) {
                    dist[v] = d + w;
                    pq.push({dist[v], v});
                }
            }
        }
        return dist;
    }
};

3) Adjacency matrix (small dense graphs)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;
    vector<vector<int>> mat(n, vector<int>(n, 0)); // 0/1 matrix
    auto addEdge = [&](int u, int v, bool undirected = true) {
        mat[u][v] = 1;
        if (undirected) mat[v][u] = 1;
    };

    addEdge(0,1);
    addEdge(1,2);
    addEdge(2,3);

    // Check edge
    cout << "Edge 1->2? " << (mat[1][2] ? "yes":"no") << "\n";
}

4) “Node” style graph (like LeetCode 133 Clone Graph)
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    vector<Node*> neighbors;
    Node(int _val): val(_val) {}
};

// build a small undirected graph: 1--2--3, 2--4
Node* buildSample() {
    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    Node* n4 = new Node(4);

    n1->neighbors.push_back(n2);
    n2->neighbors.push_back(n1);

    n2->neighbors.push_back(n3);
    n3->neighbors.push_back(n2);

    n2->neighbors.push_back(n4);
    n4->neighbors.push_back(n2);

    return n1; // return an entry node
}

// BFS traversal from a Node* (prints values, prevents revisits)
void bfsNode(Node* start) {
    unordered_set<Node*> vis;
    queue<Node*> q;
    vis.insert(start); q.push(start);
    while (!q.empty()) {
        Node* u = q.front(); q.pop();
        cout << u->val << " ";
        for (auto v: u->neighbors) if (!vis.count(v)) {
            vis.insert(v); q.push(v);
        }
    }
    cout << "\n";
}

int main() {
    Node* start = buildSample();
    bfsNode(start); // e.g., prints: 1 2 3 4
}

When to use which

Adjacency list (un/weighted): Most common; great for sparse graphs.

Adjacency matrix: Simple edge checks; good for small dense graphs.

Node struct: Matches many LeetCode “graph node” problems (Clone Graph, etc.).