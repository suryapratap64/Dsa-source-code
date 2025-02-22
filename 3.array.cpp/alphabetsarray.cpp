#include <iostream>
#include <vector>

int main() {
    std::vector<char> alphabets;

    // Lowercase alphabets
    for (char ch = 'a'; ch <= 'z'; ch++) {
        alphabets.push_back(ch);
    }

    for (char ch : alphabets) {
        std::cout << ch << " ";
    }

    return 0;
}
