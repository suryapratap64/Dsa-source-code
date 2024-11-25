void prepareadlist(unordered_map<int, set<int>> &adjlist, vector<pair<int, int>> &edges)
{
    for (int i = 0; i < edge.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;
        adjlist[u].insert(v);
        adjlist[v].insert(u);
    }
}
void bfs((unordered_map<int ,set<int>>&adjlist,)unordered_map<int,bool>&vidited,vector<int>&ans,int node)
{

    queue<int> q;
    q.push(node);
    visited[node] == 1;
    while (!q.empty())
    {
        int frontnode.front();
        q.pop();
        // store front node into ans
        ans.push_back(frontnode);
        // traversal  all neighbour nodes
        for (auto i : adjlist[frontnode])
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}
// void printadj(unordered_map<int,list<int>>&adjlist){
//     for(auto i:adjlist){
//         cout<<i.first<<"->";
//         for(auto j:i.second){
//             cout<<j<<",";

//         }
//         cout<<endl;
//     }
// }
vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    unordere_map<int, list<int>> adjlsit;
    vector<int> and;
    unordere_map<int, bool> visited;
    preapreadjlist(adjlist, edges);
    printadj(adjlist);
    ////traversal all elment of graph
    for (int i = 0; i < vertex; i++)
    {
        if (!visited[i])
        {
            bfs(adjlist, vidited, ans, i);
        }
    }
}