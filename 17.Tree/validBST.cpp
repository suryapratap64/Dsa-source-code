bool isbst(BinaryTreeNode<int>* root,int min,int max){
    //base case
    if(root==NULL){
        return true ;

    }
    if(root->data>=min && root->data<=max){
        bool left =isbst(root->left,min,root->data);
        bool right =isbst(root->right,root->data,max);
        return true;

    }
    else{
        return false;
    }
}
/// time complexity =o(n);
//space comlexity =o(h);