bool ispossible(vector<int>&stalls,int kint mid){
    int cowcount=1;
    int lsastpass=stalls[0];

    for(int i=0;i<stalls.size();i++){
        if(arr[i]-lastpos>=mid){
            cowcount++;
            if(cowcount==k){
                return true;

            }
            lastpos=arr[i];
        }
    }
    return false;
}
int aggressivecow(vector<int>&stalls,int k){
    sort(v.begin(),v.end());
    int s=0;
    int maxi=-1;
    for(int i=0;i<stalls.size();i++){
        maxi=max(maxi,stalls[i]);
    }
    int e=maxi;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(ispossiblr(stalls,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }
    return ans;
}
