
#include <iostream>
#include <utility>  // For using pair
#include <vector>
#include <tuple>
using namespace std;

int main()
{
    // 1. Creating a pair
    pair<int, string> p1; // Default pair
    pair<int, string> p2(1, "Alice"); // Initialize pair
    pair<int, string> p3 = make_pair(2, "Bob"); // Using make_pair()

    // 2. Accessing elements of the pair
    cout << "First value of p2: " << p2.first << endl; // Access first element
    cout << "Second value of p2: " << p2.second << endl; // Access second element

    // 3. Modifying pair values
    p1.first = 3;
    p1.second = "Charlie";
    cout << "Modified p1: " << p1.first << ", " << p1.second << endl;

    // 4. Comparing pairs
    if (p1 == p2)
        cout << "p1 and p2 are equal" << endl;
    else
        cout << "p1 and p2 are not equal" << endl;

    if (p2 < p3)
        cout << "p2 is less than p3" << endl; // Comparison based on first element, then second

    // 5. Pair with different types
    pair<double, char> p4(3.14, 'A');
    cout << "Pair with different types: " << p4.first << ", " << p4.second << endl;

    // 6. Pair in containers
    vector<pair<int, string>> vec;
    vec.push_back(make_pair(1, "One"));
    vec.push_back(pair<int, string>(2, "Two"));
    vec.push_back({3, "Three"}); // Using initializer list

    cout << "Vector of pairs:" << endl;
    for (auto &p : vec)
    {
        cout << p.first << ": " << p.second << endl;
    }

    // 7. Swap pairs
    cout << "Before swap: p2 = (" << p2.first << ", " << p2.second << "), p3 = (" << p3.first << ", " << p3.second << ")" << endl;
    p2.swap(p3); // Swapping pairs
    cout << "After swap: p2 = (" << p2.first << ", " << p2.second << "), p3 = (" << p3.first << ", " << p3.second << ")" << endl;

    // 8. Pair with tie (C++11)
    // If we only want to unpack one element from a pair
    int a;
    string b;
    tie(a, ignore) = p1; // Use `ignore` to skip certain elements
    cout << "Unpacked from p1: " << a << endl; // Ignored second element

    return 0;
}
