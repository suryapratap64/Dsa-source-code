#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int n,k;
       cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(k%2!=0){
        for(int i=0;i<n;i++){
            if(v[i]%2!=0){
                v[i]+=k;
            }
        }
    }else{
        vector<int>a=v;
        int maxi=*max_element(a.begin(),a.end());


         for(int i=0;i<n;i++){
            
            while(v[i]%maxi !=0 && v[i]<=maxi*10  ){
                v[i]+=k;
            }
           


           
        }




    }
   
     for(int i=0;i<n;i++){
         cout<<v[i]<<" ";

    }
    cout<<endl;
}
}