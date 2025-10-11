#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long


void solve() {
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];

    }



for(int i=0;i<n;i++){
    cout<<n+1-v[i]<<" ";
}
cout<<endl;


   


       

    }
   

     

    

   






   

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
