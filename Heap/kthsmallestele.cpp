int kthsmallest(int arr[],int l,int r, int k){
    priority_queue<int>pq;
    //step 1
    for(int i=0;i<k;i++){
        pq.push(arr[i]);

    }
    //step 2
    for(int i=k;i<=r,i++){
        if(arr[i]<pq.top()){
            pq.pop();
            pq.push(arr[i]);


        }

    }
    //ana=pq.top();
    int ans=pq.top();
    return ans;
}
