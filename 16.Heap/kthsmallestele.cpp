int kthsmallest(int arr[], int l, int r, int k) {
    priority_queue<int> pq; // Max-heap to store k elements

    // Step 1: Insert the first k elements into the heap
    for (int i = 0; i < k; i++) {
        pq.push(arr[i]);
    }

    // Step 2: Iterate through the rest of the array
    for (int i = k; i <= r; i++) {
        if (arr[i] < pq.top()) { // Compare current element with the largest in the heap
            pq.pop();           // Remove the largest element
            pq.push(arr[i]);    // Add the current element
        }
    }

    // Step 3: The top of the heap is the kth smallest element
    int ans = pq.top();
    return ans;
}

// int kthsmallest(int arr[],int l,int r, int k){
//     priority_queue<int>pq;
//     //step 1
//     for(int i=0;i<k;i++){
//         pq.push(arr[i]);

//     }
//     //step 2
//     for(int i=k;i<=r,i++){
//         if(arr[i]<pq.top()){
//             pq.pop();
//             pq.push(arr[i]);


//         }

//     }
//     //ana=pq.top();
//     int ans=pq.top();
//     return ans;
// }
