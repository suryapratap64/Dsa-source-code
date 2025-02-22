#include <vector>
using namespace std;

// Node structure
struct node {
    int data;
    node* left;
    node* right;
};

// Helper function for recursion
void solve(node* root, vector<int>& ans, int level) {
    if (root == NULL) {
        return; // Base case: if the node is NULL, return
    }
    
    // If we haven't added a node at this level, it means it's the first node at this level
    if (level == ans.size()) {
        ans.push_back(root->data); // Add the node data to the result
    }
    
    // Recur for the left and right children, incrementing the level
    solve(root->left, ans, level + 1);
    solve(root->right, ans, level + 1);
}

// Main function to get the left view
vector<int> leftView(node* root) {
    vector<int> ans;
    solve(root, ans, 0); // Start recursion from the root and level 0
    return ans;
}

// void solve(node* root,vector<int>&ans,int level){
//     if(root==NULL){
//         return ;

//     }
//     if(level==ans.size())
//     ans.push_back(root->data);
//     solve(root->left,ans,level+1);
//     solve(root->right,ans,level+1);
// }

// vector<int>leftview(node* root){
// vector<int>ans;
// solve(root,ans,0);
// return ans;
// }