vector<int>topological(vector<vector<int>>&edges,int v,int e){
    //creating adj list 
     unordered_map<int,list<int>>adj;
    for(int i=0;i<e;i++){
        int u=edges [i][0];
        int v=edges[i][1];
        adj[u].push_back(v);

    }
    //find all  indegree
    vector<int >indegree(v);
    for(auto i:adj){
        for(auto j:i.sedcond){
            indegree[j]++;
        }
    }
    //0degree walo ko push karo
    queue <int>q;
    for(int i=0;i<v;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    //do bfs
    ans.push_back(front);
    //neighbour indegree update 
    for (auto neighbour:adj[front ]){
        indegree[neighbour]--;
        if(indegree[neighbour]==0){
          q.push(neighbour);  
        }

    }
}

