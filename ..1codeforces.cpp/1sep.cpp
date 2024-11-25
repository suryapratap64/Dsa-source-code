#include <bits/stdc++.h>
using namespace std;




int main()
{

  
    int t=1;
    cin >> t;

    while (t--){
        int n;
         cin>>n;
    string st;
    string sp="aeiou";
    for(int i=0;i<5;++i){
        for(int j=0;j<n/5+(i<n%5);++j){}
            st+=sp[i];

    }

        return 0;
    }
}