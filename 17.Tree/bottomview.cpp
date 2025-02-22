#include <vector>
#include <map>
#include <queue>
using namespace std;

// Node structure
struct node {
    int data;
    node* left;
    node* right;
};

vector<int> bottomView(node* root) {
    vector<int> ans;
    if (root == NULL) {
        return ans;
    }

    // Map to store the bottom node at each horizontal distance
    map<int, int> bottomNode;

    // Queue to store pairs of node and its horizontal distance
    queue<pair<node*, int>> q;
    q.push(make_pair(root, 0));

    while (!q.empty()) {
        pair<node*, int> temp = q.front();
        q.pop();
        
        node* frontNode = temp.first;
        int hd = temp.second;

        // Update the bottom view with the current node at each horizontal distance
        bottomNode[hd] = frontNode->data;

        // Enqueue left and right child nodes with updated horizontal distance
        if (frontNode->left) {
            q.push(make_pair(frontNode->left, hd - 1));
        }
        if (frontNode->right) {
            q.push(make_pair(frontNode->right, hd + 1));
        }
    }

    // Extract the bottom view from the map (horizontal distance in sorted order)
    for (auto i : bottomNode) {
        ans.push_back(i.second);
    }

    return ans;
}

// vector<int>bottomview(node* root){
//      vector<int>ans;
//     if(root==NULL){
//         return ans;
//     }
//     map<int,int>topnode;
//     queue<pair<node*,int>>q;
//     q.push(make_pair(root,0));
//     while(!q.empty()){
//         pair<node*,int>temp=q.front();
//         node* frontnode=tmep.first();
//         node* frontnode=temp.first;
//         int hd =temp.second;
        
//             topnode[hd]=frontnode->data;

        
//         if(fronnode->left){
//             q.push(make_pair(frontnode->left,hd-1));
//         }
//         if(frontnode->right){
//             q.push(make-pair(frontnode->right,hd+1));
//         }
//     }
//     fro(auto i:topnode)
// {
//     ans.push_bak(i.second);
// }
// return ans;
// }