// Helper function to construct BST from preorder traversal
BinaryTreeNode<int>* solve(vector<int>& preorder, int mini, int maxi, int& i) {
    // Base case: If the index is out of bounds or the value is outside the range
    if (i >= preorder.size() || preorder[i] < mini || preorder[i] > maxi) {
        return NULL;
    }

    // Create the root node for the current value
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(preorder[i++]);

    // Recursively construct the left and right subtrees
    root->left = solve(preorder, mini, root->data, i);
    root->right = solve(preorder, root->data, maxi, i);

    return root;
}

// Function to construct BST from preorder traversal
BinaryTreeNode<int>* preordertobst(vector<int>& preorder) {
    int mini = INT_MIN;
    int maxi = INT_MAX;
    int i = 0;

    return solve(preorder, mini, maxi, i);
}
// BinaryTreeNode<int>* solve(vector<int>&preorder,int mini,int maxi,int  &i){
// if(i>=preorder.size()){
//     return NULL;
//     BinaryTreeNode<int>*root=new BinaryTreeNode(preorder[i++]);
//     root->left=solve(preorder,mini,root->data,i);
//     root->right=solve(preorder,root->data,maxi,i);
//     return root;

// }
// }
// BinaryTreeNode<int>*preordertobst(vector<int>&preorder){
//     int maxi=INT_MIN;
//     int mini =INT_MAX;
//     int i=0;
//     return solve(preorder,mini,max,i);

// }
// //t.c=o(n);
