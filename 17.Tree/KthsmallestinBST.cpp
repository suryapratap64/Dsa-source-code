int solve(BinayTreeNode<int>*root,int& i,int k){
    //base case
    if(root==NULL){
        return -1;

    }

    //l
    int left=solve(root->left,i,k);
    if(left!=-1){
        return left;

    }
    //n
    i++;
    if(i==k){
        return root->data;

    }
    //r
    return solve(root->right,i,k);
}


int kthsmallest(BinaryTreeNode<int>*root){
    int ans=solve(root,i,k);

}
//tc=O(n);
//sc=o(n);
