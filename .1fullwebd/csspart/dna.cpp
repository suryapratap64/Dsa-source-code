#include <iostream>
#include <string>
#include <vector>

// Function to find DNA pattern occurrences in a text
std::vector<int> findDNAMatches(const std::string& text, const std::string& pattern) {
    std::vector<int> occurrences;
    int textLength = text.length();
    int patternLength = pattern.length();

    for (int i = 0; i <= textLength - patternLength; ++i) {
        int j;
        for (j = 0; j < patternLength; ++j) {
            if (text[i + j] != pattern[j])
                break;
        }
        if (j == patternLength)
            occurrences.push_back(i);
    }
    return occurrences;
}

int main() {
    std::string text = "ACGTTGCATGTCGCATGATGCATGAGAGCT";
    std::string pattern = "GCATG";

    // Find all occurrences of the pattern in the text
    std::vector<int> occurrences = findDNAMatches(text, pattern);

    // Print the positions of pattern occurrences
    if (!occurrences.empty()) {
        std::cout << "Pattern \"" << pattern << "\" found at positions:" << std::endl;
        for (int position : occurrences) {
            std::cout << position << std::endl;
        }
    } else {
        std::cout << "Pattern \"" << pattern << "\" not found in the text." << std::endl;
    }

    return 0;
}
