TreeNode<int>*lcainbst(TreeNode<int>* root,TreeNode<int>*p,TreeNode<int>*q){
    ///base case
    if(root==NULL){
        return NULL;
    }
    if(root->data<p->data &&root->data<q->data){
        return lcainbst(root->right,p,q);

    }
    if(root->data>p->data &&root->data>q->data){
        return lcainbst(root->left,p,q);

    }
    return root;
}