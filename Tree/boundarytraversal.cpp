void traversalleft(node* root,vector<int>ans){
    if((root==NULL) ||(root->left==NULL) ||(root->right==NULL)){
        return ;
    }
    ans.push_back(root->data);
    if(root->left){
        traverseleft(root->left);
        else{
     traverseleft(root->right);
        
        }
    }
   

}
void traverseleaf(node* root,vector<int>&ans){
    if(root==NULL){
        return ;

    }
    if(root->left==NULL &&root->right==NULL){
        ans.push_back(root->data);
        return;

    }
    traversalleft(root->left,ans);
    traversalleft(root->right,ans);
}
void travereseright(node* root,vecctor<int>&ans){
    if(root==NULL ||  (root->left==NULL &&root->right==NULL)){
        return ;
    }
    if(root->right){
        traverseright(root->right,ans);
        
    }
    else{
        traversalleft(root->left,ans);
    }
    ans.push_back(root->data);
}
vector<int>boundary(node *root){
    if(root==NULL){
        return ans;
        ans.push_back(root->data);
        //traversing left if the tree
        traversalleft(root->left,ans);
        traversalleaf(root->left,ans);
        traversalleaf(root->right,ans);
        traverseright(root->right,ans);
    }
    return ans;
}