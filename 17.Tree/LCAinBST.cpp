TreeNode<int>* lcainbst(TreeNode<int>* root, TreeNode<int>* p, TreeNode<int>* q) {
    // Base case: If the root is NULL, return NULL
    if (root == NULL) {
        return NULL;
    }

    // If root's value is greater than both p and q, LCA lies in the left subtree
    if (root->data > p->data && root->data > q->data) {
        return lcainbst(root->left, p, q);
    }

    // If root's value is smaller than both p and q, LCA lies in the right subtree
    if (root->data < p->data && root->data < q->data) {
        return lcainbst(root->right, p, q);
    }

    // If root's value is between p and q, this is the LCA
    return root;
}
