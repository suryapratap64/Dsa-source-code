//string to int in the string
ans is presumably a variable holding an integer value. It starts at 0 and is progressively built as the code processes each character of the string s.
s[i] refers to the i-th character of the string s, and the expression s[i] - '0' converts the character at index i into its corresponding integer value.
Breakdown of the line:
// ans * 10: Shifts the current value of ans one decimal place to the left, making room for the next digit.
(s[i] - '0'): Converts the character at position i of the string s into its numeric equivalent. For example, '3' - '0' gives the integer 3.
ans = ans * 10 + (s[i] - '0'): The new digit from s[i] is added to the end of the current value of ans, essentially constructing the integer.
Example:
If s = "123", here's how ans evolves:

Initially, ans = 0.
For i = 0, s[0] = '1', so ans = 0 * 10 + (1 - '0') = 1.
For i = 1, s[1] = '2', so ans = 1 * 10 + (2 - '0') = 12.
For i = 2, s[2] = '3', so ans = 12 * 10 + (3 - '0') = 123.

//satatic casting 

static_cast<long>(n) is a C++ type casting expression used to explicitly convert the variable int  n to a long type. The static_cast keyword is used for compile-time type conversions and is preferred over traditional C-style casting for its type safety.
int n = 42;
long longValue = static_cast<long>(n);

//to lower case pushing in vector
 s.push_back(tolower(paragraph[i]));
 //checking empty function in stirng
 (!s.empty())


