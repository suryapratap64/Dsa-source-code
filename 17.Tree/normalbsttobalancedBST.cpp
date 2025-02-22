// Inorder Traversal to store elements in sorted order
void inorder(TreeNode<int>* root, vector<int>& in) {
    if (root == NULL) {
        return;
    }
    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}

// Convert sorted array to a balanced BST
TreeNode<int>* inordertobst(int s, int e, vector<int>& in) {
    // Base case: if the current range is invalid
    if (s > e) {
        return NULL;
    }

    // Find the middle element and make it root
    int mid = (s + e) / 2;
    TreeNode<int>* root = new TreeNode<int>(in[mid]);

    // Recursively build the left and right subtrees
    root->left = inordertobst(s, mid - 1, in);
    root->right = inordertobst(mid + 1, e, in);

    return root;
}

// Main function to create a balanced BST from the given tree
TreeNode<int>* balancedbst(TreeNode<int>* root) {
    vector<int> inorderval;
    
    // Store inorder traversal values
    inorder(root, inorderval);
    
    // Use the sorted values to construct the balanced BST
    return inordertobst(0, inorderval.size() - 1, inorderval);
}
// void inorder(TreeNode<int>* root,vectro<int>&in){
//     if(root==NULL){
//         return ;

//     }
//     inorder(root->left,in);
//     in.push_back(root->data);
//     inorder (root->right,in);



// }
// TreeNode<int>*inordertobst(int s,int e,vector<int>&in){
//     //base case 
//      if(s>e){
//         return NULL;

//      }
//      int mid = (s+e)/2;
//      TreeNode <int>*root=new TreeNode<int>(in[mid] );

//      root->left=inordertobst(s,mid-1,in);
//      root->right=inordertobst(mid+1,e,in);
//      return root;

// }
// TreeNode<int>*balancedbst(TreeNode<int>* root){
//     vector<int>inorderval;
//     //store inorder stores val
//     inorder(root,inorderval);

// }