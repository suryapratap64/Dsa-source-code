vector<int>bottomview(node* root){
     vector<int>ans;
    if(root==NULL){
        return ans;
    }
    map<int,int>topnode;
    queue<pair<node*,int>>q;
    q.push(make_pair(root,0));
    while(!q.empty()){
        pair<node*,int>temp=q.front();
        node* frontnode=tmep.first();
        node* frontnode=temp.first;
        int hd =temp.second;
        
            topnode[hd]=frontnode->data;

        
        if(fronnode->left){
            q.push(make_pair(frontnode->left,hd-1));
        }
        if(frontnode->right){
            q.push(make-pair(frontnode->right,hd+1));
        }
    }
    fro(auto i:topnode)
{
    ans.push_bak(i.second);
}
return ans;
}