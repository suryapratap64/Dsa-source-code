void dfs(int node, unordered_map<int, bool> &visited, unordered_map < int, list<int> &adj, vector<int> &component)
{
    component.push_back(node);
    visited[node] = true;
    // har connective node ke liye ecursive call
    for (auto i : adj[node])
    {
        if (!visted[i])
        {
            dfs(i, visited, adj, component);
        }
    }
}

vector<vector<int>> depthfirstsearch(int V, int E, vector<vector<int>> edges)
{
    // preapre adjlist
    unordered_map < int, list<int> adj;
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<vector<int>> ans;
    unordered_map<int, bool> visited;
    for (int i = 0; i < V, i++)
    {
        if (!visited[i])
        {
            vector<int> component;
            dfs(i, visited, adjlist, component);
            ans.push_back(component);
        }
    }
}