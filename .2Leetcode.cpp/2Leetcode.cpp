#include<bits/stdc++.h>
using namespace std;
int changetobi(vector<int>&v){

    int ans=0;
    int j=0;
   for(int i=v.size()-1;i>=0;i--){
    
       
        int bit = 
        //f bit == 1, the number n is odd.
        //If bit == 0, the number n is even
        ans = (bit * pow(10, j)) + ans;
        
        j++;
      
   }
    
    return ans;
}
int main(){
    vector<int>v{5,3,4};
    cout<<changetobi(v);

}