#include <vector>
using namespace std;

// Node structure
struct node {
    int data;
    node* left;
    node* right;
};

// Traverse the left boundary (excluding leaf nodes)
void traverseLeft(node* root, vector<int>& ans) {
    if (root == NULL || (root->left == NULL && root->right == NULL)) {
        return;
    }
    ans.push_back(root->data); // Add current node to the result
    if (root->left) {
        traverseLeft(root->left, ans); // Recur for left child
    } else {
        traverseLeft(root->right, ans); // If no left child, recur for right child
    }
}

// Traverse all leaf nodes
void traverseLeaves(node* root, vector<int>& ans) {
    if (root == NULL) {
        return;
    }
    // If it's a leaf node, add it to the result
    if (root->left == NULL && root->right == NULL) {
        ans.push_back(root->data);
        return;
    }
    // Recur for left and right subtrees
    traverseLeaves(root->left, ans);
    traverseLeaves(root->right, ans);
}

// Traverse the right boundary (excluding leaf nodes, in reverse order)
void traverseRight(node* root, vector<int>& ans) {
    if (root == NULL || (root->left == NULL && root->right == NULL)) {
        return;
    }
    if (root->right) {
        traverseRight(root->right, ans); // Recur for right child
    } else {
        traverseRight(root->left, ans); // If no right child, recur for left child
    }
    ans.push_back(root->data); // Add current node to the result after recursion
}

// Main function to compute the boundary traversal
vector<int> boundary(node* root) {
    vector<int> ans;
    if (root == NULL) {
        return ans; // Empty tree
    }
    ans.push_back(root->data); // Add root node (boundary starts with the root)

    // Traverse the left boundary (excluding root and leaves)
    traverseLeft(root->left, ans);

    // Traverse all leaf nodes (from left to right)
    traverseLeaves(root->left, ans);
    traverseLeaves(root->right, ans);

    // Traverse the right boundary (excluding root and leaves, in reverse order)
    vector<int> rightBoundary; // Temporary vector to store right boundary
    traverseRight(root->right, rightBoundary);
    ans.insert(ans.end(), rightBoundary.rbegin(), rightBoundary.rend()); // Add in reverse order

    return ans;
}

// void traversalleft(node* root,vector<int>ans){
//     if((root==NULL) ||(root->left==NULL) ||(root->right==NULL)){
//         return ;
//     }
//     ans.push_back(root->data);
//     if(root->left){
//         traverseleft(root->left);
//         else{
//      traverseleft(root->right);
        
//         }
//     }
   

// }
// void traverseleaf(node* root,vector<int>&ans){
//     if(root==NULL){
//         return ;

//     }
//     if(root->left==NULL &&root->right==NULL){
//         ans.push_back(root->data);
//         return;

//     }
//     traversalleft(root->left,ans);
//     traversalleft(root->right,ans);
// }
// void travereseright(node* root,vecctor<int>&ans){
//     if(root==NULL ||  (root->left==NULL &&root->right==NULL)){
//         return ;
//     }
//     if(root->right){
//         traverseright(root->right,ans);
        
//     }
//     else{
//         traversalleft(root->left,ans);
//     }
//     ans.push_back(root->data);
// }
// vector<int>boundary(node *root){
//     if(root==NULL){
//         return ans;
//         ans.push_back(root->data);
//         //traversing left if the tree
//         traversalleft(root->left,ans);
//         traversalleaf(root->left,ans);
//         traversalleaf(root->right,ans);
//         traverseright(root->right,ans);
//     }
//     return ans;
// }