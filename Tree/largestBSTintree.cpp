class info{
    public:
    int maxi;
    int mini;
    bool isbst;
    int size;

};
info solve(TreeNode<int>* root,int &ans){
    //base case
    if(root==NULL){
        return(INT_MIN,INT_MAX,true,0);
    }
    info left=solve(root->left,ans);
    info right=solve(root->right,ans);
    info currnode;
    currnode.size=left.size()+right.size()+1;
    currnode.maxi=(root->data,right.maxi);
    curr.mini =min(root->data,left.min);
    if(left.isbst && right.bst && (root->data>left.maxi && root->data<right.mini)){
        currnode.isbst=true;

    }else{
        currnode.bst=false;
    }
    //answer update
    if(currnode.isbst){
        ans=max(ans,currnode.size);
    }
    return currnode;
    


}
int largestbst(TreeNode<int>* root){
    int maxsize=0;
    info temp=solve(root,maxsize);
    return maxsize;
}

//time complexity =O(n);
