//approach one

void inorder(TreeNOde<int>*root,vector<int>&in){
 if(root==NULL){
        return 0;
    }
    inorder(root->left);
    in.push_back(root->data);
    inorder(root->right);
}
vector<int>mergearray(vector<int>a,vector<int>b)
{
    vector<int>ans(a.size()+b.size());
    int i=0,j=0;
    while(i<a.size() &&b.size())
    if(a[i]<b[j]){
        ans[k++]=a[i];
        i++;
    }
    else{
        ans[k++]=a[i];
        j++;
    }
    while(i<a.size()){
        ans[k++]=b[j];
        i++;
    }
    while(i<a.size()){
        ans[k++]=b[j];
        j++;
    }
    return ans;

}

TreeNode<int>* inordertobst(int s,int e,vector<int>&in){
    ///base case
    if(s>e){
        return NULL;
    }
    int mid=(s+e)/2;
    TreeNode<int>* root=new TreeNode<int>(in[mid]);
    root->left=inordertobst(s,mid-1,in);
    root->right=inordertobst(mid+1,e,in);
    return root;
}



TreeNode<int>*mergebst(TreeNode<int>*root1,TreeNode<int>root2,vector<int>in){
//    vector<int>bst1,bst2;
//    inorder(root1,bst1);
//    inorder(root2,bst2);
//    // merge both sorted array
//    vector<int>mergearray=mergearray(bst1,bst2);
//    //used maerged inorder to built bst
//    return inordertobst(s,e,mergearray);




///step1:convert bst nto sorted dll
TreeNode<int>*head1=NULL;
convertintosorteddll(root1,head1);
head1->left=NULL;
TreeNode<int>*head2=NULL;
convertedintosorteddll(root2,head2);
head2->left=NULL;
//step2:merge to sorted ll
TreNode<int>*head=mergelinkedlist(head1,head2);
//convert sll into bst
return sortedlltobst(head,countNodes(head));

     
}
//approach 2 with linked list
void convertintosortedll(TreeNode<int>*root,TreeNode<int>* &head){
    //base case
    if(root==NULL){
        retrun NULL;
    }
    convertintosorteddll(root->right,head);
    root->right=head;
    if(head!=NULL)
        head->left=root;
        head=root;
        convertintosorteddll(root->left,head);
    
}\
TreeNode<int>mergelinedlist(TreeNode<int>*head1,TreeNode<int>*head2){
    TreeNode<int>*head=NULL;
    TreeNode<int> *tail=NULL;
    while(head1!=NULL &&head2!=NULL){
        if(head1->data<head2->data){
            if(head==NULL){
                head=head1;
                tail=head;
                head1=head->right;
            }
            else{
                tail->right=head;
                head->left=tail;
                tail=head;
                head1=head1->right;
            }

        }
        else{
            if(head==NULL){
                head=head2;
                tail=head2;
                head1=head2->right;
            }
            else{
                tail->right=head2;
                head2->left=tail;
                tail=head2;
                head2=head2->right;

            }
        }


    }
    while(head1!=NULL){
 tail->right=head;
                head->left=tail;
                tail=head;
                head1=head1->right;
    }
    while(head2!=NULL){
         tail->right=head2;
                head2->left=tail;
                tail=head2;
                head2=head2->right;
    }
}
int coutnnodes(TreeNode<int>*head){
    int cnt=0;
    TreeNode<int>*temp=head;
    while(temp!=NULL){
        cnt++;
        temp=temp->right;
    }
    return cnt;
}
TreeNode<int>*sortedlltobst(TreeNode<int>*&head,int n){
    // base case
    if(n<=0||root==NULL){
        return NULL;

    }
    TReeNode<int>*left=sortedlltobst(head,n/2);
    TreeNode<int>*root=head;
    root->left=left;
    root->right=sortedlltobst(head,n-n/2-1);
    return root;
}
//time complexity=o(h);

