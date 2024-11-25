void toposort(int node , unordered_map<int,bool>&visited,unordred_map<int,list<int>>&adj){
    visited[node]=1;
 for(auto neighbour: adj([node])){
if(!visted[neighbour]){
toposort(neighbour,visited,s,adj);

}
s.push(node);
 
}
//for problem unordered amp kijagah vector bhoi kar sate hai
vector<int>topologicalsort(vector <vector<int>>&edges,int v,int e){
    //creating adj list
    unordred_map<int,list<int>>adj;
    for(int i=0;i<e;i++){
        int u=edges[i][0];
        int v=edges[1][0];
        adl[u].push_back(v);

    }
    //call dfs topological sort until funtion alll components 
   ;
    stack<int>s;
    for(int i=0;i<n;i++){
        if(!visited[i]){
toposort(i,visited,s,adj);
        }
    }
    unordered_nap<int,bool>visited;

    vector <int>ans;
    while(!empty()){
        ans.push_back.top();
        s.pop();
        return ans;

}


}