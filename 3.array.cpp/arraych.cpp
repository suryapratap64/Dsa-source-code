#include<bits/stdc++.h>
using namespace std;
int main(){

    //this is another mehod to initialise the array
    //  arr = new int[k];
 char arr[7] = {'a','v','m','n','h'};
for(int i=0;i<=4;i++){


cout<<arr[i]<<" ";
// indexing 0 se start hoga in memory initialize hoga;
}

}
//  merging of two vector 
vector<int> a = {1, 2, 3};
vector<int> b = {4, 5, 6};

vector<int> merged = a;
merged.insert(merged.end(), b.begin(), b.end());