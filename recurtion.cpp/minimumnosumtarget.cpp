#include<bits/stdc++.h>

using namespace std;
int solve(vector<int>&arr,int target){
    if(target==0){
        return 0;
    }
    if(target<0){
        int min=INT_MAX;
        return min;
    }
    //let solve one case
    int mini=INT_MAX;
    for(int i=0;i<arr.size();i++){
        int ans=solve(arr,target-arr[i]);
        if(ans!=INT_MAX)
mini=min(mini,ans+1);
       
    }
    return mini;

}
int main(){
    vector<int>v{1,2,8};
    int target=5;
    cout<<"ans is;"<<solve(v,target);
    return 0;
}