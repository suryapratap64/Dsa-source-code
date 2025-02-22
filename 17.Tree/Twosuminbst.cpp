void inorder(BinaryNodeTree<int>*root,vectro<int>&in){
    if(root==NULL){
        return ;

    }
    inorder(root->left,in);
    in.push_back(root->data);
    inorder (root->right,in);


}

bool twosuminbst(BinaryTreeNode<int>*root,int target){
    vector<int>inorderval;
    inorder(root,inorderval);
    int i=0,j=inorderval.size()-   1;
    while(i<j){
        int sum=inorderval[i]+inorderval[j];
        if(sum==target){
            return true;

        }
        else if(sum>target){
            j--;

        }
    }
    else{
        i++;
    }
return false;
}