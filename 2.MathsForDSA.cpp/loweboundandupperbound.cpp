🧠 Concept

In C++,
lower_bound() and upper_bound() are functions that work on sorted containers (like vector, set, etc.).

They are used to find positions (iterators) in a sorted range.

1️⃣ lower_bound(begin, end, value)

👉 Finds the first position where value can be inserted without breaking the order —
or in other words, the first element ≥ value.

2️⃣ upper_bound(begin, end, value)

👉 Finds the first position where an element is greater than value —
i.e., the first element > value.

⚙️ Example
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 4, 4, 5, 7, 9};

    auto lb = lower_bound(v.begin(), v.end(), 4);
    auto ub = upper_bound(v.begin(), v.end(), 4);

    cout << "lower_bound at index: " << (lb - v.begin()) << endl;
    cout << "upper_bound at index: " << (ub - v.begin()) << endl;

    return 0;
}

🧩 Output
lower_bound at index: 2
upper_bound at index: 4

📊 Visualization

Array: {1, 2, 4, 4, 5, 7, 9}
Index: 0 1 2 3 4 5 6

Function	Finds	Value	Index
lower_bound(..., 4)	first element ≥ 4	4	2
upper_bound(..., 4)	first element > 4	5	4
🧮 Difference in Simple Words
Function	Condition	Result
lower_bound	first element ≥ value	points to 1st matching or next larger
upper_bound	first element > value	points to 1st strictly larger element
💡 Tip:

If you want to find count of elements equal to value in a sorted container:

int count = upper_bound(v.begin(), v.end(), x) - lower_bound(v.begin(), v.end(), x);