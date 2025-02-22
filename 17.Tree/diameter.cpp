// Approach 1: Simple Diameter Calculation
int diameter(node* root) {
    // Base case
    if (root == NULL) {
        return 0;
    }

    int op1 = diameter(root->left);
    int op2 = diameter(root->right);
    int op3 = height(root->left) + height(root->right) + 1;

    int ans = max(op1, max(op2, op3));
    return ans;
}

// Helper function to calculate height
int height(node* root) {
    if (root == NULL) {
        return 0;
    }
    return max(height(root->left), height(root->right)) + 1;
}

// Approach 2: Optimized Diameter Calculation (Fast Approach)
pair<int, int> diameterFast(node* root) {
    if (root == NULL) {
        // First: diameter, Second: height
        return make_pair(0, 0);
    }

    // Recursive calls
    pair<int, int> left = diameterFast(root->left);
    pair<int, int> right = diameterFast(root->right);

    // Calculating diameter
    int op1 = left.first;                         // Diameter of left subtree
    int op2 = right.first;                        // Diameter of right subtree
    int op3 = left.second + right.second + 1;     // Diameter through root

    pair<int, int> ans;
    ans.first = max(op1, max(op2, op3));          // Maximum diameter
    ans.second = max(left.second, right.second) + 1; // Height of the current node

    return ans;
}
// //diameter=larget distance between two leafs
// int diameter(node* root){
//     //base case;
//     if(noot==NULL){
//         return 0;

//     }

//     int op1=diameter(root->left);
//     int op2=diameter(root->right);
//     int op3=height(root->left)+height(root->right)+1;
//     int ans=max(op1,max(op2,op3));
//     return ans;

// }
// //apporaoch one
// pair<int,int>diameterfast(node* root){
//     if(root==NULL)
//     {
//     pair<int,int>p=make_pair(0,0);
//     return p;
//     pair<int,int>left=diameterfast(root->left);
//     pair<int,int>right=diameterfast(root->right);
//     int op1=left.first;
//     int op2=right.first;
//     int op3=left.second+right.second+1;
//     pair<int,int>ans;
//     ans.first=max(op1,max(op2,op3));
//     ans.second=amx(left.second,right.secod)+1;
//     return ans;

//     }
// }



