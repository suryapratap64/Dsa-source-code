
vector<int> verticalOrder(node *root) {
    // A map to store nodes grouped by horizontal distance (hd) and level (lvl)
    // The structure is: map<hd, map<lvl, vector<int>>>
    map<int, map<int, vector<int>>> nodes;
    
    // A queue to perform level-order traversal (BFS)
    // Each queue element is: pair<node*, pair<hd, lvl>>
    queue<pair<node *, pair<int, int>>> q;
    
    // Vector to store the final vertical order traversal
    vector<int> ans;

    // If the tree is empty, return an empty result
    if (root == NULL) {
        return ans;
    }

    // Push the root node into the queue with initial horizontal distance (hd = 0) and level (lvl = 0)
    q.push(make_pair(root, make_pair(0, 0)));

    // BFS traversal
    while (!q.empty()) {
        // Get the front element of the queue
        pair<node *, pair<int, int>> temp = q.front();
        q.pop();

        // Extract the node and its associated hd and lvl
        node *frontNode = temp.first;
        int hd = temp.second.first;   // Horizontal distance
        int lvl = temp.second.second; // Level

        // Store the node's data in the map based on its hd and lvl
        nodes[hd][lvl].push_back(frontNode->data);

        // If the node has a left child, push it into the queue
        // with hd decreased by 1 and lvl increased by 1
        if (frontNode->left) {
            q.push(make_pair(frontNode->left, make_pair(hd - 1, lvl + 1)));
        }

        // If the node has a right child, push it into the queue
        // with hd increased by 1 and lvl increased by 1
        if (frontNode->right) {
            q.push(make_pair(frontNode->right, make_pair(hd + 1, lvl + 1)));
        }
    }

    // Traverse the map to extract the vertical order traversal
    for (auto i : nodes) {          // Iterate over the horizontal distances
        for (auto j : i.second) {   // Iterate over the levels within the horizontal distance
            for (auto k : j.second) { // Iterate over the nodes at the current hd and lvl
                ans.push_back(k);    // Add the node's value to the result
            }
        }
    }

    return ans; // Return the final vertical order traversal
}
// vector<int> verticalorder(node *root)
// {
//     map < int, map<int, vector<int>> nodes;
//     queue<pair<node *, pair<int, int>>> q;
//     if (root == NULL)
//     {
//         return ans;
//     }
//     q.push(make_pair(root, make_pair(0, 0)));
//     while (!q.empty())
//     {
//         pair<node *, pair<int, int>> temp = q.front();
//         node *frontnode = temp.first;
//         int hd = temp.second.first;
//         int lvl = temp.second.second;
//         nodes[hd][lvl].push_back(frontnode->data);
//         if (frontnode->left)
//         {
//             q.push(make_pair(frontnode->left, make_pair(hd - 1, lvl + 1)));
//         }
//         if (frontnode->right)
//             q.push(make_pair(frontnode->right, make_pair(hd + 1, lvl + 1)))
//     }
//     for (auto i : nodes)
//     {
//         for (auto j : i.second)
//         {
//             for (auto k : j.second)
//             {
//                 ans.push_back(k);
//             }
//         }
//     }
//     return ans;
// }