#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    //map 
    map<int,int>map;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        map[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //precompute
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<hash[number]<<endl;
        cout<<map[number];
        // iterate in the map
        for(auto it:map){
            cout<<it.first<<"->"<<it.second<<endl;
        }
    }


    return 0;
}
