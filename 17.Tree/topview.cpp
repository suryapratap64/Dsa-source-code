
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

vector<int> topView(node* root) {
    vector<int> ans;
    if (root == NULL) {
        return ans;
    }

    // Map to store the top node at each horizontal distance
    map<int, int> topNode;

    // Queue to store pairs of node and its horizontal distance
    queue<pair<node*, int>> q;
    q.push(make_pair(root, 0));

    while (!q.empty()) {
        pair<node*, int> temp = q.front();
        q.pop();
        
        node* frontNode = temp.first;
        int hd = temp.second;

        // If this horizontal distance is not yet in the map, add it
        if (topNode.find(hd) == topNode.end()) {
            topNode[hd] = frontNode->data;
        }

        // Enqueue left and right child nodes with updated horizontal distance
        if (frontNode->left) {
            q.push(make_pair(frontNode->left, hd - 1));
        }
        if (frontNode->right) {
            q.push(make_pair(frontNode->right, hd + 1));
        }
    }

    // Extract the top view from the map (horizontal distance in sorted order)
    for (auto i : topNode) {
        ans.push_back(i.second);
    }

    return ans;
}

// vector<int>topview(node* root){
//     vector<int>ans;
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
//         if(topnode.find(hd)==topnode.end()){
//             topnode[hd]=frontnode->data;

//         }
//         if(fronnode->left){
//             q.push(make_pair(frontnode->left,hd-1));
//         }
//         if(frontnode->right){
//             q.push(make-pair(frontnode->right,hd+1));
//         }
//     }
//     for(auto i:topnode)
// {
//     ans.push_back(i.second);
// }
// return ans;
// }