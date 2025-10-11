#include <iostream>
#include <list>

using namespace std;

int main() {
    // 1. Declaration & Initialization
    list<int> myList = {10, 20, 30, 40, 50};
    list<int> myList2(5, 100); // List of 5 elements with value 100

    cout << "Initial List: ";
    for (int x : myList) cout << x << " ";
    cout << "\n";

    // 2. Insertions
    myList.push_back(60);   // Inserts at the end
    myList.push_front(5);   // Inserts at the beginning
    myList.insert(next(myList.begin(), 2), 15); // Inserts 15 at position 3

    cout << "After Insertions: ";
    for (int x : myList) cout << x << " ";
    cout << "\n";

    // 3. Deletion
    myList.pop_back();   // Removes last element
    myList.pop_front();  // Removes first element
    myList.erase(next(myList.begin(), 2)); // Removes element at 3rd position
    myList.remove(30);   // Removes all occurrences of 30

    cout << "After Deletion: ";
    for (int x : myList) cout << x << " ";
    cout << "\n";

    // 4. Accessing Elements
    cout << "Front Element: " << myList.front() << "\n";
    cout << "Back Element: " << myList.back() << "\n";

    // 5. Sorting & Reversing
    myList.sort();
    cout << "After Sorting: ";
    for (int x : myList) cout << x << " ";
    cout << "\n";

    myList.reverse();
    cout << "After Reversing: ";
    for (int x : myList) cout << x << " ";
    cout << "\n";

    // 6. Merging Two Lists
    list<int> listA = {1, 3, 5};
    list<int> listB = {2, 4, 6};
    listA.merge(listB);  // Merges listB into listA
    cout << "Merged List: ";
    for (int x : listA) cout << x << " ";
    cout << "\n";

    // 7. Splicing (Moving elements from one list to another)
    list<int> listC = {100, 200, 300};
    listA.splice(next(listA.begin(), 2), listC);  // Moves listC into listA at position 3

    cout << "After Splicing: ";
    for (int x : listA) cout << x << " ";
    cout << "\n";

    // 8. Removing Duplicates
    list<int> dupList = {10, 10, 20, 30, 30, 40};
    dupList.unique();
    cout << "After Removing Duplicates: ";
    for (int x : dupList) cout << x << " ";
    cout << "\n";

    // 9. Swap Two Lists
    list<int> listX = {1, 2, 3}, listY = {7, 8, 9};
    listX.swap(listY);
    cout << "ListX after swap: ";
    for (int x : listX) cout << x << " ";
    cout << "\nListY after swap: ";
    for (int x : listY) cout << x << " ";
    cout << "\n";

    // 10. Size & Empty Check
    cout << "Size of myList: " << myList.size() << "\n";
    cout << "Is myList empty? " << (myList.empty() ? "Yes" : "No") << "\n";

    // 11. Clear the List
    myList.clear();
    cout << "After Clearing, is myList empty? " << (myList.empty() ? "Yes" : "No") << "\n";

    return 0;
}
