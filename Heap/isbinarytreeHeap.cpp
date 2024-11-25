int countnodes(struct Node* root){
    //base case
    if(root==NULL){
        return 0;
    }
    int ans=1+countnodes(root->left)+countnodes(root->right);
    return ans;
      
}
bool iscbt(struct node* root,int index,int cnt){
    if(root==NULL){
        return true;

    }
    else{
        bool left=iscbt(root->left,2*index+1,cnt);
        int right=iscbt(root->right,
        2*index+2,cnt);
        return (left &&right);
    }

}
bool ismaxorder(struc  Node* root){
    //leaf node
    if(root->left==NULL  root->right==NULL){
        return true;
    }
    if(root->right==NULL){
        return (root->data>root->right->data);

        
    }
    else{
        bool left=ismaxorder(root->left);
        bool right=ismaxorder(root->right);
        if(left &&right&&root->data&&root->data>root->right->data){
            return true;
        }
        else{
            return false; 
        }
    }
}

bool isheap(struct Node* tree){

int index=0;
int totalcount=countnodes(tree);
if(iscbt(tree,index,totalcount) && ismaxorder(tree))
{
    return true;

}else{
    return false;

}
}