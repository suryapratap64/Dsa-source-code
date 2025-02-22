#include <iostream>
#include <algorithm> // Include this for std::reverse

using namespace std;

int main() {
    string str = "my name is surya";
    
    cout << str << endl;  // Print original string
    cout << "Length: " << str.length() << endl;  // Print length
    
    reverse(str.begin(), str.end());  // Reverse the string using std::reverse
    cout << "Reversed: " << str << endl;  // Print reversed string
    
    return 0;
}
