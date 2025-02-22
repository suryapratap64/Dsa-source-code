pair<bool,int>issumtreefast(Node* root){
    if(root==NULL){
        pair<bool,int>p=make_pair(true,0);
        return p;
    }
    if()
}
#include <iostream>
using namespace std;

// Definition of a binary tree node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Helper function to find the largest root-to-leaf sum
void findMaxSum(Node *root, int currentSum, int &maxSum) {
    if (root == NULL) {
        return; // Base case: return if the node is NULL
    }

    // Add the current node's data to the current sum
    currentSum += root->data;

    // If this is a leaf node, update maxSum if the currentSum is greater
    if (root->left == NULL && root->right == NULL) {
        maxSum = max(maxSum, currentSum);
        return;
    }

    // Recurse for left and right subtrees
    findMaxSum(root->left, currentSum, maxSum);
    findMaxSum(root->right, currentSum, maxSum);
}

// Function to calculate the largest root-to-leaf sum
int maxRootToLeafSum(Node *root) {
    int maxSum = INT_MIN; // Initialize maxSum to a very small value
    findMaxSum(root, 0, maxSum); // Start from the root with current sum as 0
    return maxSum;
}

// Example usage
int main() {
    // Create a sample binary tree
    Node *root = new Node(10);
    root->left = new Node(8);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    root->right->right = new Node(2);

    cout << "Largest root-to-leaf sum: " << maxRootToLeafSum(root) << endl;

    return 0;
}
