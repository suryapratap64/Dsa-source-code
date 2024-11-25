#include<vector>
void dfs(int node ,int parent,int &timer, vector<int>&disc(v), vector<int>&low(v), vector<vector<int>> &result,unordered_map<int,list<int>>&adj,unordered-map<int,bool>&vis){
    vis[node]=true;
    disc[node]=low[node]=timer++;
    for(auto nbr :adj[node]){
        if(nbr==parent){
            continue;
        }
        if(!vis[nbr]){
            dfs(nbr,node,timer,disc,low,result,adj,vis);
            low[node]=min(low[node],low[nbr]);
            // check edge is bridge
            if(low[nbr]>disc[node]){
                vector<int>ans;
                ans.push_back(node);
                ans.push_back(nbr);
                result.push_back(ans);
            }
        }
        //tc=0(n+e);
        //s.c=o(n);
    }
}
vector<vector<int>>findbridges(vector<vector<int>> &edges,int v,int e){
    //adj list
    unordered_map<int,list<int>>adj;

    for(int i=0;i<edges.size();i++){
        int u=edges[i][0];
        int v=edges[i][1];
        adj[u].puah_back(v);
        adj[v].push_back(u);

    }
    int timer=0;
    vector<int>disc(v);
    vector<int>low(v);
    int parent=-1;
    unordered-map<int,bool>vis;
    for(int i=0;i<v;i++){
disc[i]=-1;
low[i]=-1;
    }
    //dfs
    vector<vector<int>> result;
    for(!vis[i]){
        dfs(i,parent,timer,disc,low,result,vis);
    }
    }
    return result;

}