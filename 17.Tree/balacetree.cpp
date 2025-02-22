bool isbalanced(Node* root){
    if(root==NULL){

        return true;
    }
    bool left=isbalanced(root->left);
    bool right=isbalanced(root->right);
    bool diff=abs(height(root->left)-height(root->riight)<=1)
if(left && right && diff){
    return true;
}
else{
  return false  
}
    
}