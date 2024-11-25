bool searchinbst(BinaryTreeNode<int>*root,int x){
    // //base case
    // if(root==NULL){
    //     return false;

    // }
    // if(root->data==x){
    //     return false;
    // }
    // if(root->data>x){
    //     //left part me
    //     return searckinbst(rooot->left,x);


    // }
    // else{
    //     return searchinbst(root->right,x);
    // }
    // //space complexity=o(h);
    BinaryTreeNode<T>*Temp=root;
    while(temp!=NULL){
        if(temp->data==x){
            return true;
        }
        if(temp->data>x){
            temp=temp->left;
        }
        else{
            temp=temp->right;
        }

        

    }


}