#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        // If lengths are different, they cannot be anagrams
        if (s.length() != t.length()) {
            return false;
        }

        // Array to count character frequencies (26 for each letter in lowercase alphabet)
        vector<int> count(26, 0);

// 'a': This is the ASCII value of the character 'a' (97 in ASCII).
// s[i] - 'a': Converts the character s[i] into an index representing its position in the alphabet.
// For example:
// If s[i] is 'a', s[i] - 'a' is 0.
// If s[i] is 'b', s[i] - 'a' is 1.
// If s[i] is 'z', s[i] - 'a' is 25.
// count[s[i] - 'a']: Accesses the corresponding index in the count array for the character s[i].
        // Increment counts for characters in s and decrement for characters in t
        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        // If all counts are zero, s and t are anagrams
        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) {
                return false;
            }
        }

        return true;
    }
};
