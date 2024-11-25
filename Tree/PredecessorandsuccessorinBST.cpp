pair <int,int> predecessors(BinaryTreeNode<int>*root,int key){
    //find key
    BinaryTreeNode<int>* temp=root;
    int pre=-1;
    int suc=-1;
    while(temp->data!=key){
        if(temp->data>key){
            temp=temp->left;
            suc=temp->data;

        }else{
            temp=temp->rigth;
            pred=temp->data;
        }
    }
    //pres and succ
    //pred

    BinaryTreeNode<int>* leftTree=temp->left;
while(rightTree!=NULL){
    succ=righTree->data;
    rightTree=rightTree->left;

}
//succ
BinaryTreeNode<int>* rightTree=temp->right;
while(righr!=NULL){
    succ=rightTree->data;
    rightTree=rightTree->left;

}
pair<int,int>ans =make_pair(pred,succ);
return ans;



}