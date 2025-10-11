#include <bits/stdc++.h>
using namespace std 
#define ll long long 
#define ull unsigned long long
#define lld long double
#define pii pair<int,int>
#define pll pair<ll,ll>
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define vi vector<int>
#define nline "\n"
#define inf (ll)1e18
#define iinf (int)2e9
#define eb emplace_back
#define vb vector<bool>
#define vll vector<ll> 
#define vvll vector<vll>
#define vpll vector<pll>
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vc vector<char>
#define vvc vector<vector<char>>
#define nline "\n"
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define mp make_pair
#define fs first
#define sc second
#define set_bits __builtin_popcountll
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define print(k) {for(auto v : k){cout << v <<" ";} cout << endl;}
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
ll mod = 998244353;
int sz = 1000005;
ll fact[1000005];
ll ifact[1000005];
#define maxsz 200005
#define logmax 18
void solve(){
    int k;
    ll x;
    cin>>k>>x;
    while(k--){
            if(x%2==0){
                x=x/2;

    }
    else{
        x=x*3+1;
    }

    }
cout<<x<<endl;
    

}
int main(){
int t;
cin>>t;

while(t--){


    solve(); 
}

    return 0;
}


