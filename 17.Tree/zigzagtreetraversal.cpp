vector<int>zigzagtraversla(node* root){
    vector<int>result;
    if(root==NULL){
        return result;
    }
    queue<node*>q;
    q.push(root);
    /*queue<root*> pq;

This line declares a queue named pq that will store pointers to root objects.
root* indicates that the queue will hold pointers to objects of the type root.
q.push(root);

This line pushes (adds) a root pointer to the queue q.
However, there seems to be a small inconsistency here: you’ve defined a queue named pq, but you're pushing an element to a queue named q. If these are meant to be the same queue, they should have the same name (either pq or q).*/
    bool ltor=true;
while(!q.empty()){
    int size=q.size();
    vecot<int >ans(size);
    // vector<int> ans(size);
    for(int i=0;i<size;i++){

        node* frontnode =q.front();
        q.pop();
        int index= ltor ? i:size-i-1;
        ans[index]=frontnode->data;
        if(frontnoode->left){
            q.push(frontnode->left);
        }
        if(frontnode->right){
            q.push(q.frontnode->right);
        }
    }
     ltor=!ltor;
    for(auto i:ans){
            result.push_back(i)
        }
    
}
return result;
    

}