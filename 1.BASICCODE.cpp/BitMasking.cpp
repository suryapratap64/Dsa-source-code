Perfect 👍 You asked about bit masking — let’s go step by step.

🔹 What is Bit Masking?

Bit Masking = A technique where we use bits (0/1) of integers to represent choices, states, or subsets.

Think of an integer in binary form → each bit acts like a switch:

1 → include / true / on

0 → exclude / false / off

👉 For example, if you have a set {a, b, c}, then:

000 → {} (empty set)

101 → {a, c}

111 → {a, b, c}

So a number itself encodes the subset.

🔹 Why use Bit Masking?

Easy way to represent subsets / states.

Works very fast with bitwise operators (&, |, ^, <<, >>).

Common in subsequence generation, DP on subsets, combinatorics, graph problems, games, optimization.

🔹 General Bitwise Operators Recap

& (AND) → 1 & 1 = 1, else 0

| (OR) → 0 | 1 = 1

^ (XOR) → different bits = 1

~ (NOT) → flips bits

<< (left shift) → multiply by 2

>> (right shift) → divide by 2

🔹 3 General Examples of Bit Masking
1. Generate All Subsequences (Subsets)
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "abc";
    int n = s.size();

    for (int mask = 0; mask < (1 << n); mask++) {  // 0 to 2^n - 1
        string sub = "";
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {  // check if i-th bit is set
                sub += s[i];
            }
        }
        cout << (sub.empty() ? "\"\"" : sub) << endl;
    }
}


👉 Output for "abc":

""
a
b
ab
c
ac
bc
abc

2. Check if a number is even/odd using bit mask
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x = 7;
    if (x & 1)   // check last bit
        cout << x << " is Odd";
    else
        cout << x << " is Even";
}


👉 Odd numbers have last bit 1, even numbers have last bit 0.

3. Turn ON / OFF / Toggle a particular bit
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num = 5; // binary: 0101

    // Turn ON the 2nd bit (count from 0)
    num |= (1 << 2);  
    cout << "After ON: " << num << endl; // 0101 -> 0101 (already ON = 5)

    // Turn OFF the 0th bit
    num &= ~(1 << 0);  
    cout << "After OFF: " << num << endl; // 0101 -> 0100 (4)

    // Toggle the 2nd bit
    num ^= (1 << 2);  
    cout << "After TOGGLE: " << num << endl; // 0100 -> 0000 (0)
}

🔹 Summary / Shortcut Notes

Bit Masking = using binary representation to encode information.

Use cases:

Subset / subsequence generation (mask from 0 → (1<<n)-1)

Fast checks (odd/even, power of two)

State representation in DP (like dp[mask])

Turning ON/OFF specific bits

Optimizing combinatorial problems

👉 Do you want me to also explain bit masking in Dynamic Programming (DP on subsets) with a real coding example (like Travelling Salesman Problem or Subset Sum)?