void inorder(TreeNode<int>* root,vectro<int>&in){
    if(root==NULL){
        return ;

    }
    inorder(root->left,in);
    in.push_back(root->data);
    inorder (root->right,in);



}
TreeNode<int>*flattern(TreeNode<int>* root){
    vector<int>inorderval;
    //store inorder into sortes values
    inorder(root,inorderval);
    int n=inorderval.size();
    TreeNode<int>*newroot=new TreeNode<int>(inorderval[0]);
    TreeNode<int>* curr=newRoot;
    // second step

    for(int i=0;i<n;i++){
        TreeNode<int>* temp=new TreeNode<int>(inorderval[i]);
        curr->left=NULL;
        curr->right=temp;
        curr=temp;




    }
    //3 step
    curr->left=NULL;
    curr->right=NULL;
    return newRoot;


    
}