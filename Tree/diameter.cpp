//diameter=larget distance between two leafs
int diameter(node* root){
    //base case;
    if(noot==NULL){
        return 0;

    }

    int op1=diameter(root->left);
    int op2=diameter(root->right);
    int op3=height(root->left)+height(root->right)+1;
    int ans=max(op1,max(op2,op3));
    return ans;

}
//apporaoch one
pair<int,int>diameterfast(node* root){
    if(root==NULL)
    {
    pair<int,int>p=make_pair(0,0);
    return p;
    pair<int,int>left=diameterfast(root->left);
    pair<int,int>right=diameterfast(root->right);
    int op1=left.first;
    int op2=right.first;
    int op3=left.second+right.second+1;
    pair<int,int>ans;
    ans.first=max(op1,max(op2,op3));
    ans.second=amx(left.second,right.secod)+1;
    return ans;

    }
}



