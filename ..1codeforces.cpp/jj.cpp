#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
int n;
cin>>n;
vector<int>a(n);
vector<int>b;

for(int i=0;i<n;i++){
    cin>>a[i];

}
unordered_map<int,int>m;
for(auto i:a){
    m[i]++;
}

int maf=INT_MIN;
int mif=INT_MAX;
int c=0;
for(auto i:m){
    b.push_back(i.first);
    c++;

}


for(int i=c;i<n;i++){
    b.push_back(i);

}

for(int i=0;i<n;i++){
    cout<<b[i]<<" ";
    

}
cout<<endl;

     

        
    }

    return 0;
}