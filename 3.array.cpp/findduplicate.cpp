#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void findDuplicates(const vector<int>& arr) {
    unordered_map<int, int> freqMap; 

    
    for (int num : arr) {
        freqMap[num]++;
    }

    
    cout << "Duplicates in the array: ";
    bool found = false;
    for (const auto& pair : freqMap) {
        if (pair.second > 1) {
            cout << pair.first << " ";
            found = true;
        }
    }
    if (!found) {
        cout << "None";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {4, 3, 2, 7, 8, 2, 3, 1};
    findDuplicates(arr);
    return 0;
}
