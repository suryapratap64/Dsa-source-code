#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n, x;
        cin >> n >> x;

        if(n==2){
            int c=n&x;
            int ans=c&n;
            cout<<ans<<endl;
        }
        else if(n>=3){
            int ans=n-1+x;
        }
        else if(n==1 &&x==0){
            cout<<-1<<endl;


        }
        else if(x==0){
            int ans=(n-3)+6;
        }
        else {
            
        }
      
            cout << sum << '\n';
        }
    }


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
