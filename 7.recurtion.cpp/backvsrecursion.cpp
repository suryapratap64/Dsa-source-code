// Correct backtracking implementation: 
#include <bits/stdc++.h>
using namespace std;

void backtrack(int start, string str, string res, vector<string>& combi) {
    // Add current combination (skip empty if you want)
    if(!res.empty())
        combi.push_back(res);

    // Explore further characters
    for(int i = start; i < str.size(); i++) {
        // Include str[i]
        res.push_back(str[i]);

        // Recurse for next characters
        backtrack(i + 1, str, res, combi);

        // Backtrack: remove last character
        res.pop_back();
    }
}

int main() {
    string str = "abc";
    vector<string> combi;
    backtrack(0, str, "", combi);

    for(auto c : combi)
        cout << c << endl;

    return 0;
}
// Here’s a corrected version to generate all combinations of a string: recursion

#include <bits/stdc++.h>
using namespace std;

void solve(int index, string str, string res, vector<string>& combi) {
    int n = str.size();
    if(index == n) {
        if(!res.empty())  // ignore empty combination
            combi.push_back(res);
        return;
    }

    // Include current character
    solve(index + 1, str, res + str[index], combi);

    // Exclude current character
    solve(index + 1, str, res, combi);
}

int main() {
    string str = "abc";
    vector<string> combi;
    solve(0, str, "", combi);

    for(auto c : combi)
        cout << c << endl;

    return 0;
}

Function Calls in Order

Here’s the exact order of recursion calls:

// backtrack(0, "", "")

// backtrack(1, "abc", "a") → add "a"

// backtrack(2, "abc", "ab") → add "ab"

// backtrack(3, "abc", "abc") → add "abc"

// return → "ab"

// return → "a"

// backtrack(3, "abc", "ac") → add "ac"

// return → "a"

// return → ""

// backtrack(2, "abc", "b") → add "b"

// backtrack(3, "abc", "bc") → add "bc"

// return → "b"

// return → ""

// backtrack(3, "abc", "c") → add "c"

// return → ""

//tree
""  
├── "a"  
│   ├── "ab"  
│   │   └── "abc"  
│   └── "ac"  
├── "b"  
│   └── "bc"  
└── "c"


//with function call
backtrack(0, "")
│
├── backtrack(1, "a")
│   │
│   ├── backtrack(2, "ab")
│   │   │
│   │   └── backtrack(3, "abc")
│   │
│   └── backtrack(3, "ac")
│
├── backtrack(2, "b")
│   │
│   └── backtrack(3, "bc")
│
└── backtrack(3, "c")
