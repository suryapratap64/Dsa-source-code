🔹 Common String Functions in C++
1. Length / Size
#include <iostream>
#include <string>
using namespace std;
 

transform(s.begin(), s.end(), s.begin(), ::tolower);

int main() {
    string s = "Hello World";
    cout << s.length() << endl;  // 11
    cout << s.size() << endl;    // 11 (same as length)


2. Access Characters
string s = "Hello";
cout << s[0] << endl;      // H
cout << s.at(1) << endl;   // e

3. Substring
string s = "Hello World";
cout << s.substr(0, 5) << endl;   // Hello

4. Find
string s = "Hello World";
cout << s.find("World") << endl;   // 6 (starting index)
cout << s.find("Test") << endl;    // string::npos (not found)

5. Replace
string s = "I like cats";
s.replace(7, 4, "dogs");   // start=7, length=4 → replace "cats"
cout << s << endl;         // I like dogs

6. Erase / Remove
string s = "abcdef";
s.erase(2, 2);     // from index=2, remove 2 chars → "abef"
cout << s << endl;

7. Insert
string s = "Hello World";
s.insert(5, ",");
cout << s << endl;  // Hello, World

8. Append / Concatenate
string s = "Hello";
s.append(" World");
cout << s << endl;   // Hello World

string a = "Hi", b = " There";
cout << a + b << endl;  // Hi There

9. Compare
string a = "apple";
string b = "banana";

if (a.compare(b) == 0) cout << "Equal\n";
else if (a.compare(b) < 0) cout << "a < b\n";   // lexicographic
else cout << "a > b\n";

10. Clear / Empty
string s = "Test";
s.clear();
if (s.empty()) cout << "String is empty\n";

11. Push Back / Pop Back
string s = "Hi";
s.push_back('!');
cout << s << endl;   // Hi!
s.pop_back();
cout << s << endl;   // Hi

12. Iterating
string s = "Hello";
for (char c : s) cout << c << " ";  // H e l l o

}
//find function
   return doubled.find(goal) != string::npos;
if (doubled.find(goal) != string::npos) {
    return true;  // goal exists inside doubled
} else {
    return false; // goal not found
}

// If not found, it gives string::npos (a special value meaning "not found").
// So != string::npos means: "true if found, false if not found".