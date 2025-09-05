Perfect 🎯 चलो हम ek hi simple problem — Fibonacci Number (n-th Fibonacci) — ko चारों तरीकों से solve karte hain.
इससे तुम्हें Recursion → Memoization → Tabulation → Space Optimized ka clear difference samajh aa जाएगा।

Problem:

Fibonacci Series:

F(0) = 0  
F(1) = 1  
F(n) = F(n-1) + F(n-2)   (for n >= 2)

✅ 1. Pure Recursion (Naive Top-to-Bottom)

👉 Bas recursive relation likha aur call kar diya.

int fib(int n) {
    if (n <= 1) return n; // base case
    return fib(n-1) + fib(n-2);
}


📌 Explanation (Hinglish):

Agar n=5 hai → fib(5) → fib(4)+fib(3)

fib(4) → fib(3)+fib(2)

fib(3) bar-bar calculate hoga.
⚠️ Time Complexity: O(2^n) (bohot slow).

✅ 2. Recursion + Memoization (Top-to-Bottom DP)

👉 Ab hum ek dp[] array use karte hain taaki same result dobara na nikle.

int solve(int n, vector<int>& dp) {
    if (n <= 1) return n;

    if (dp[n] != -1) return dp[n]; // already computed

    return dp[n] = solve(n-1, dp) + solve(n-2, dp);
}

int fib(int n) {
    vector<int> dp(n+1, -1);
    return solve(n, dp);
}


📌 Explanation:

Jab fib(3) ek baar compute ho jata hai → dp[3] mein store ho jayega.

Next time direct dp[3] return ho jayega.
⏳ Time Complexity: O(n)
💾 Space: O(n) (dp + recursion stack).

✅ 3. Tabulation (Bottom-to-Top DP)

👉 Recursion hata ke iterative loop use karte hain.

int fib(int n) {
    if (n <= 1) return n;

    vector<int> dp(n+1);
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}


📌 Explanation:

Pehle base cases (dp[0], dp[1]) fill karte hain.

Loop chala ke dp[i] build karte hain.
⏳ Time: O(n)
💾 Space: O(n).

✅ 4. Space Optimized DP

👉 Hume dp array ki zarurat nahi, kyunki hume sirf last 2 states chahiye.

int fib(int n) {
    if (n <= 1) return n;

    int prev2 = 0, prev1 = 1;

    for (int i = 2; i <= n; i++) {
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}


📌 Explanation:

Bas 2 variables rakhte hain (prev1, prev2).

Har step pe current calculate karke update kar dete hain.
⏳ Time: O(n)
💾 Space: O(1)

🔑 Summary (Fibonacci Example)
Approach	Example Code Style	Time Complexity	Space Complexity
Naive Recursion	fib(n-1)+fib(n-2)	O(2^n)	O(n) (stack)
Memoization (Top-Down)	Recursion + dp[n]	O(n)	O(n)
Tabulation (Bottom-Up)	Iterative dp[i]	O(n)	O(n)
Space Optimized	Iterative + 2 vars	O(n)	O(1)

👉 Ab tumhe clear difference samajh aaya hoga ki DP ka main funda same hai — Overlapping Subproblems ko avoid karna.
Bas likhne ka tarika alag hota hai:

Recursive Top-Down (memoization)

Iterative Bottom-Up (tabulation)

Space optimize

चाहो तो अगली बार मैं यही चार approaches House Robber pe likh ke compare karun? (thoda real DP problem hai, Fibonacci to easy hai 🙂)