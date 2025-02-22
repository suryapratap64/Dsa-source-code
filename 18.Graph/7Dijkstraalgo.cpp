vector<int >dijkstra(vector<vector<int >>&vec,int vertices,int edges,int source){
    // creating adjancy list
    unordered_map<int,list<pair<int ,int>>>adj;
    for(int i=0;i<edges;i++){
        int u=vec[i][0];
        int v=vec[i][1];
        int w=vec[i][2];
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));

    } 
    //creation distance array with infinite vale infinatally
    vector<int >dist(vertices);
    for(int i=0;i<vertices;i++){
        dist[i]=INT_MAX;
        //creation of set on the basis of (diatance,node) 
          set<pair<int,int>>st;
        //initialise distance with source node
        dist[source]=0;
        st.insert(make_pair(0,source));
        while(!st.empty()){
            //fetch top record
            auto top=*(st.begin());
            int nodedistance=top.first;
            int topnode=top.second;
            //record top record now
            st.erase(st.begin());
            //traversing on neighbours
            for(auto neighbour:adj[topnode]){
                if(nodedistance+neighbour.second<dist[neighbour.first]){
                    auto record=st.find(make_pair(dist[neighbour.first],neighbour.first));
                    //if record found then erase it
                    if(record !=st.end()){
                        st.erase(f);
                    }
                    //distance update
                    dist[neighbour.first]=nodedistance+neighbour.second;
                    //record push in set;
                    st.insert(make_pair(dist[neighbour.first],neighbour.first));
                }
            }
        }

return dist;
    }
}