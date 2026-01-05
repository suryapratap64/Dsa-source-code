🧠 Meaning

// __builtin_popcount(x) is a GCC/Clang built-in function that counts the number of set bits (1s) in the binary representation of an integer x.

// Example:
int x = 13; // binary = 1101
int bits = __builtin_popcount(x); // returns 3 (since 1101 has 3 ones)