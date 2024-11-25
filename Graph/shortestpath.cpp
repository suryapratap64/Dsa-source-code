#include <bits/stdc++.h>
using namespace std;
class Graph
{
public:
    unordered_map<int, list<pair<int, int>>> adj;
    void addedge(int u, int v, int weight)
    {
        pair<int, int> p = make_pair(v, weight);
        adj[u].push_back(p);


    }
    void printadj(){
        for(auto i:adj){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<"("<<j.first<<","<<j.second<<")";

             }
             cout<<endl;
        }
    }
    void dfs(int node,unordered_map<int,bool>&vis,stack<int>&topo){
        vis[node]=true;
        for(auto neighbour:adj[node]){
            if(!vis[neighbour.first]){
                dfs(neighbour.first,vis,topo);
            }
        }
        topo.push(node);
    }
    void getshortestpath(int src,vector<int>&dis, stack<int> &topo){
        dis[src]=0;
        while(!topo.empty()){
            int top=topo.top();
            topo.pop();
            if(dis[top]!=INT_MAX){
                for(auto i:adj[top]){
                    if(dis[top]+i.second<dis[i.first]){
                        dis[i.first]=dis[top]+i.second;

                    }
                }


            }
        }
    }
};
 int main()
{
    Graph g;
    g.addedge(3,5,3);
     g.addedge(2,5,6);
     g.addedge(7,3,5);
     g.addedge(5,0,3);
     g.addedge(1,9,4);
     g.addedge(0,13,4);
     

  g.printadj();  
  int n=6;
  unordered_map<int,bool>visited;
  stack<int>s;
  for(int i=0;i<n;i++){
    if(!visited[i]){
        g.dfs(i,visited,s);

    }
    
  } 
  int src=1;
  vector<int>dist(n);
  for(int i=0;i<n;i++){
    dist[i]=INT_MAX;
    g.getshortestpath(src,dist,s);
    cout<<"ans is"<<endl;
    for(int i=0;i<dist.size();i++){
        cout<<dist[i]<<" ";

    }
    cout<<endl;
  }
    return 0;
}