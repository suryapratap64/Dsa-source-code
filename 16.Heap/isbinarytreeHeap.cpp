#include <iostream>
using namespace std;

// Definition of Node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to count total nodes in the tree
int countnodes(struct Node* root) {
    // Base case
    if (root == NULL) {
        return 0;
    }
    int ans = 1 + countnodes(root->left) + countnodes(root->right);
    return ans;
}

// Function to check if the tree is a complete binary tree (CBT)
bool iscbt(struct Node* root, int index, int cnt) {
    if (root == NULL) {
        return true;
    }

    // If index exceeds the total count of nodes, it's not a CBT
    if (index >= cnt) {
        return false;
    }

    // Recursively check left and right subtrees
    bool left = iscbt(root->left, 2 * index + 1, cnt);
    bool right = iscbt(root->right, 2 * index + 2, cnt);
    return left && right;
}

// Function to check if the tree satisfies max-heap order
bool ismaxorder(struct Node* root) {
    // If the node is a leaf node, it satisfies max-heap
    if (root->left == NULL && root->right == NULL) {
        return true;
    }

    // If the node has only a left child
    if (root->right == NULL) {
        return (root->data >= root->left->data);
    }

    // If the node has both children
    bool left = ismaxorder(root->left);
    bool right = ismaxorder(root->right);

    return (left && right && root->data >= root->left->data && root->data >= root->right->data);
}

// Function to check if the tree is a heap
bool isheap(struct Node* tree) {
    int index = 0;
    int totalcount = countnodes(tree);

    if (iscbt(tree, index, totalcount) && ismaxorder(tree)) {
        return true;
    } else {
        return false;
    }
}

// Driver Code
int main() {
    Node* root = new Node(10);
    root->left = new Node(9);
    root->right = new Node(8);
    root->left->left = new Node(7);
    root->left->right = new Node(6);
    root->right->left = new Node(5);

    if (isheap(root)) {
        cout << "The binary tree is a heap." << endl;
    } else {
        cout << "The binary tree is not a heap." << endl;
    }

    return 0;
}

// int countnodes(struct Node* root){
//     //base case
//     if(root==NULL){
//         return 0;
//     }
//     int ans=1+countnodes(root->left)+countnodes(root->right);
//     return ans;
      
// }
// bool iscbt(struct node* root,int index,int cnt){
//     if(root==NULL){
//         return true;

//     }
//     else{
//         bool left=iscbt(root->left,2*index+1,cnt);
//         int right=iscbt(root->right,2*index+2,cnt);
//         return (left &&right);
//     }

// }
// bool ismaxorder(struct  Node* root){
//     //leaf node
//     if(root->left==NULL &&  root->right==NULL){
//         return true;
//     }
//     if(root->right==NULL){
//         return (root->data>root->right->data);

        
//     }
//     else{
//         bool left=ismaxorder(root->left);
//         bool right=ismaxorder(root->right);
//         if(left &&right&&root->data&&root->data&&root->right->data){
//             return true;
//         }
//         else{
//             return false; 
//         }
//     }
// }

// bool isheap(struct Node* tree){

// int index=0;
// int totalcount=countnodes(tree);
// if(iscbt(tree,index,totalcount) && ismaxorder(tree))
// {
//     return true;

// }else{
//     return false;

// }
// }