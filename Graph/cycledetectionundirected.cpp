bool iscyclicBFs(int src,unordered_map<int,bool>&visited,unordered_map<int,list<int>>&ans,){
    unordered_map<int,int>parent;
    parent[src]=-1;
    visited[src]=1;
    queue<int>q;
    q.push(src);
    while(!q.empty()){
        int front =q.node();
        q.poo();
        for(auto neighbour:adj[front]){
            if(visited[neighbour]==true && neighbour!=parent[front]){
                return true;

            }
            else if(!visited[neighbour]){
                q.push(neighbour);
                visited[neighbour]=1;
                parent[neighbour]=front;
            }
        }

    }
    return false;

    
    
    
    }

//dfs detection cyclic in graph
bool iscyclicDFS(int node,int parent,unordered_map<int,bool>&visited,unordered_amp<int,list<int>adj){
    visited[node]=true;
    for(auto neighbour:adj[node]){
        if(!visited[neighbour]){
            bool cycledetected=iscyclicDFS(neighbour,node,visited,adj);
            if(cycleDetected){
                return true;

            }
            else if(neighbour!=parent){
                //cucle present
                return true;
            }
            return false;
        }
    }

} 

stirng cycledetection(vector<vector<int>>& edges,int n,int m){
    //create adjancy list
    unordered_map<int,list<int>>adj;
    for(int i=0;i<m;i++){
    int u=edges[i][0];
    int v=edges[i][1];
    adj[u].push_back(v);
    adj[v].push_back(u);
    if(!visited[i]){
        bool ans=iscyclicBFS(i,visited,adj);
        if(ans==1){
            return "yes";
        }
    }
    return "no";
    }
}
