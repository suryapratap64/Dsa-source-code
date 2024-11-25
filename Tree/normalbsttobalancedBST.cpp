void inorder(TreeNode<int>* root,vectro<int>&in){
    if(root==NULL){
        return ;

    }
    inorder(root->left,in);
    in.push_back(root->data);
    inorder (root->right,in);



}
TreeNode<int>*inordertobst(int s,int e,vector<int>&in){
    //base case 
     if(s>e){
        return NULL;

     }
     int mid = (s+e)/2;
     TreeNode <int>*root=new TreeNode<int>(in[mid] );

     root->left=inordertobst(s,mid-1,in);
     root->right=inordertobst(mid+1,e,in);
     return root;

}
TreeNode<int>*balancedbst(TreeNode<int>* root){
    vector<int>inorderval;
    //store inorder stores val
    inorder(root,inorderval);

}