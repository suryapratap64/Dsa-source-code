
BinaryTreeNode<int>* solve(vector<int>&preorder,int mini,int maxi,int  &i){
if(i>=preorder.size()){
    return NULL;
    BinaryTreeNode<int>*root=new BinaryTreeNode(preorder[i++]);
    root->left=solve(preorder,mini,root->data,i);
    root->right=solve(preorder,root->data,maxi,i);
    return root;

}
}
BinaryTreeNode<int>*preordertobst(vector<int>&preorder){
    int maxi=INT_MIN;
    int mini =INT_MAX;
    int i=0;
    return solve(preorder,mini,max,i);

}
//t.c=o(n);
