#include <bits/stdc++.h>
using namespace std;
template<typename T>
class graph
{
public:
    unordered_map<T, list<T>> adj;
    // direction=0 undirected graph
    // direction=1 diredcted graph
    void addedge(int u, int v, bool direction)
    {
        adj[u].push_back(v);
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }
    void printadjlist()
    {
        for (auto i : adj)
        {
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << j << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
};
int main()
{
    int n;
    cout<<"enter the no of nodes"<<endl;
    cin>>n;
    int m;
    cout<<"enter the no of nodes"<<endl;
    cin>>m;
    graph g;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.addedge(u,v,0);
        //printing for the graph
        g.printadjlist();

    }


    return 0;
}
