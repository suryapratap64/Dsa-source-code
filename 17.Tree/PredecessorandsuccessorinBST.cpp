pair<int, int> predecessors(BinaryTreeNode<int>* root, int key) {
    BinaryTreeNode<int>* temp = root;
    int pred = -1, succ = -1;

    // Find the node with the given key
    while (temp != NULL && temp->data != key) {
        if (temp->data > key) {
            succ = temp->data;  // Successor is the current node
            temp = temp->left;
        } else {
            pred = temp->data;  // Predecessor is the current node
            temp = temp->right;
        }
    }

    // If the node is not found
    if (temp == NULL) return make_pair(-1, -1);

    // Predecessor: The rightmost node in the left subtree
    if (temp->left != NULL) {
        BinaryTreeNode<int>* leftTree = temp->left;
        while (leftTree->right != NULL) {
            leftTree = leftTree->right;
        }
        pred = leftTree->data;
    }

    // Successor: The leftmost node in the right subtree
    if (temp->right != NULL) {
        BinaryTreeNode<int>* rightTree = temp->right;
        while (rightTree->left != NULL) {
            rightTree = rightTree->left;
        }
        succ = rightTree->data;
    }

    return make_pair(pred, succ);
}
// pair <int,int> predecessors(BinaryTreeNode<int>*root,int key){
//     //find key
//     BinaryTreeNode<int>* temp=root;
//     int pre=-1;
//     int suc=-1;
//     while(temp->data!=key){
//         if(temp->data>key){
//             temp=temp->left;
//             suc=temp->data;

//         }else{
//             temp=temp->rigth;
//             pred=temp->data;
//         }
//     }
//     //pres and succ
//     //pred

//     BinaryTreeNode<int>* leftTree=temp->left;
// while(rightTree!=NULL){
//     succ=righTree->data;
//     rightTree=rightTree->left;

// }
// //succ
// BinaryTreeNode<int>* rightTree=temp->right;
// while(righr!=NULL){
//     succ=rightTree->data;
//     rightTree=rightTree->left;

// }
// pair<int,int>ans =make_pair(pred,succ);
// return ans;



// }