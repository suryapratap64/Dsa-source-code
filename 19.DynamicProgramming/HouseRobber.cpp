बहुत बढ़िया सवाल 👏 DP (Dynamic Programming) के approaches समझना बहुत ज़रूरी है। चलो मैं सारे types को hinglish + examples में explain करता हूँ:

🔥 Types of Dynamic Programming Approaches
1. Recursion (Naive Top-to-Bottom)

👉 सबसे पहले हम pure recursion लिखते हैं, बिना DP/memoization के।

हम problem को तोड़ते हैं छोटे subproblems में।

हर बार same subproblem बार-बार calculate होता है (Overlapping Subproblems problem)।

📌 Example (House Robber problem):

int solve(vector<int>& nums, int n) {
    if (n == 1) return nums[0];
    if (n == 2) return max(nums[0], nums[1]);

    int include = nums[n-1] + solve(nums, n-2); // current house loot + skip previous
    int exclude = solve(nums, n-1);             // skip current house
    return max(include, exclude);
}


⚠️ Problem → Time Complexity बहुत high हो जाता है (Exponential O(2^n))।

2. Top-to-Bottom with Memoization (Recursive DP)

👉 यहाँ हम recursion तो use करते हैं, लेकिन dp array रखते हैं ताकि same subproblem बार-बार solve ना हो।

Memoization = Recursion + Storage (dp array / hashmap)।

📌 Example (House Robber with memoization):

int solve(vector<int>& nums, int n, vector<int>& dp) {
    if (n == 1) return nums[0];
    if (n == 2) return max(nums[0], nums[1]);

    if (dp[n] != -1) return dp[n]; // already solved

    int include = nums[n-1] + solve(nums, n-2, dp);
    int exclude = solve(nums, n-1, dp);

    return dp[n] = max(include, exclude);
}


🔹 Isse Time Complexity O(n) हो जाता है क्योंकि हर state एक बार ही solve होती है।

3. Bottom-to-Top with Tabulation (Iterative DP)

👉 इसमें हम recursion avoid करके directly loop se chhoti problem se badi problem solve करते हैं।

Base case initialize करते हैं और gradually answer बनाते हैं।

📌 Example (House Robber tabulation):

int rob(vector<int>& nums) {
    int n = nums.size();
    if (n == 1) return nums[0];
    if (n == 2) return max(nums[0], nums[1]);

    vector<int> dp(n);
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);

    for (int i = 2; i < n; i++) {
        dp[i] = max(nums[i] + dp[i-2], dp[i-1]);
    }
    return dp[n-1];
}


🔹 Ye iterative approach है, recursion use nahi hota.
🔹 Time Complexity O(n), Space O(n)।

4. Space Optimized DP

👉 कभी-कभी hume dp array की ज़रूरत नहीं होती, क्योंकि हमें सिर्फ पिछले 1-2 states की ज़रूरत होती है।

ऐसे में हम सिर्फ 2-3 variables use करके काम चला लेते हैं।

📌 Example (House Robber optimized):

int rob(vector<int>& nums) {
    int n = nums.size();
    if (n == 1) return nums[0];
    if (n == 2) return max(nums[0], nums[1]);

    int prev2 = nums[0];
    int prev1 = max(nums[0], nums[1]);

    for (int i = 2; i < n; i++) {
        int curr = max(nums[i] + prev2, prev1);
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}


🔹 Space Complexity O(1) → क्योंकि dp array नहीं रखा।

🔑 Summary (Hindi + English)
Approach	                         Kaise kaam karta hai	Time Complexity	Space Complexity
Recursion (Naive)	                      Top-to-Bottom, no dp	O(2^n)	O(n) (stack)
Top-to-Bottom + Memoization	Recursion + dp array	O(n)	O(n)
Bottom-to-Top Tabulation	Iterative, dp array	O(n)	O(n)
Space Optimized DP	Iterative, only 2-3 variables	O(n)	O(1)

👉 DP हमेशा यही 4 tarike se likha जाता है।

Naive recursion (sirf samajhne ke liye)

Memoization (Top-to-Bottom)

Tabulation (Bottom-to-Top)

Space optimized (Best in most cases)

क्या चाहो तो मैं ek hi problem (House Robber / Fibonacci / Knapsack) ko चारों tariko se likhकर compare कर दूँ?