#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  
    while (t--) {
        int n;
        cin >> n ;

        vector<int> a(n),b(n),c(n);
        for(int i=0;i<n;i++){
            cin >> a[i];


        }
        for(int i=0;i<n;i++){
            cin >> b[i];
            

        }

        for(int i=0;i<n;i++){
            cin >> c[i];
        }
        vector<int>v;
       
       
        for(int i=0;i<n;i++){
        int e=max(a[i],max(b[i],c[i]));
        v.push_back(e);


        }
        sort(v.begin(),v.end());


       int  sum=v[n-1]+v[n-2]+v[n-3];
        cout << sum << endl;

       

    }
    return 0;
}
