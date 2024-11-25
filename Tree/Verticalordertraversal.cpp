vector<int> verticalorder(node *root)
{
    map < int, map<int, vector<int>> nodes;
    queue<pair<node *, pair<int, int>>> q;
    if (root == NULL)
    {
        return ans;
    }
    q.push(make_pair(root, makr_pair(0, 0)));
    while (!q.empty())
    {
        pair<node *, pair<int, int>> temp = q.front();
        node *frontnode = temp.first;
        int hd = temp.second.first;
        int lvl = temp.second.second;
        nodes[hd][lvl].push_back(frontnode->data);
        if (frontnode->left)
        {
            q.push(make_pair(frontnode->left, make_pair(hd - 1, lvl + 1)));
        }
        if (frontnode->right)
            q.push(make_pair(frontnode->right, make_pair(hd + 1, lvl + 1)))
    }
    for (auto i : nodes)
    {
        for (auto j : i.second)
        {
            for (auto k : j.second)
            {
                ans.push_back(k);
            }
        }
    }
    return ans;
}