#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string s = "dog cat cat dog";
    istringstream ss(s);
    string word;
    vector<string> words;

    while (ss >> word) {
        words.push_back(word);
    }

    for (string w : words) {
        cout << w ;
    }
    return 0;
}
