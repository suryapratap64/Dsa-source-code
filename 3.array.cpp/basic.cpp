These two declarations look similar but are very different in C++. Let’s break it:

1. vector<pair<int,int>> adj(n);

This means one vector named adj.
That vector has n elements.
Each element is a pair<int,int>.
So: you just get a flat vector of pairs.

✅ Example:
int n = 5;
vector<pair<int,int>> adj(n);
adj[0] = {1, 2};
adj[1] = {3, 4};

Here adj is like:
[ (1,2), (3,4), (0,0), (0,0), (0,0) ]

2. vector<pair<int,int>> adj[n];

This means an array of size n.
Each element of that array is a vector<pair<int,int>>.
So you get n separate vectors, and each vector can hold multiple pairs.
Used when building adjacency lists in graphs (neighbors of each node).

✅ Example:
int n = 5;
vector<pair<int,int>> adj[n];
adj[0].push_back({1, 2});
adj[0].push_back({2, 5});
adj[1].push_back({3, 4});

Here adj[0] is a vector with 2 pairs: [(1,2), (2,5)]
adj[1] is [(3,4)]
Others are empty.

🔑 Key Difference
vector<pair<int,int>> adj(n); → 1D vector of pairs (size n).
vector<pair<int,int>> adj[n]; → array of vectors, each can hold pairs (like adjacency list).

👉 In graph problems, we usually use the second form (vector<pair<int,int>> adj[n];) or, even better (modern C++ style):

vector<vector<pair<int,int>>> adj(n);

because it avoids fixed-size arrays and is safer (no VLA issues).
