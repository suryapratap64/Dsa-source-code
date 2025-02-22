#include<bits/stdc++.h>
using namespace std;
 void pairsum(vector<int>&v,int n){
    cin>>n;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if((v[i]+v[j])==5){
                vector<int>temp;
                temp.push_back(min(v[i],v[j]));
                temp.push_back(max(v[i],v[j]));

            }

        }
    }
    
}
int main(){
   std::vector<int> v = {1, 2, 3, 4, 5};
   int n=v.size();
   cout<<pairsum(v,n);


    

    return 0;
}
