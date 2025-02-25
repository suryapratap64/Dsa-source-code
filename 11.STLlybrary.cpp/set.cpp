#include <bits/stdc++.h>
using namespace std;
/*Sets are a type of associative container in which each element has to be unique because the value of the element identifies it. The values are stored in a specific sorted order default in ascending order i.e. either ascending or descending.*/

#include <set>
int main()
{
    set<int> s;
//vector ke set ka example
//set<vector<int>>s;

//set of pairs
//set<pair<int,int>>sums;

//->unordered_set<int> numSet(nums.begin(), nums.end());  // store all elements in a set for O(1) access


    s.insert(5);
    s.insert(8);
    s.insert(6);
    s.insert(8);
    s.insert(4);
    s.insert(7);
    s.insert(8);
    for (auto i : s)
    {
        cout << i << endl;
    }
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for (auto i : s)
    {
        cout << i;
    }
    cout << endl;
    cout << "s present or not" << " " << s.count(8) << endl;
    //count->this is used for searching element in the set
    set<int>::iterator itr = s.find(5);
    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it;
    }
    //unordered set 
    // C++ program to demonstrate various function of
// unordered_set

    // declaring set for storing string data-type
    unordered_set<string> stringSet;

    // inserting various string, same string will be stored
    // once in set

    stringSet.insert("code");
    stringSet.insert("in");
    stringSet.insert("c++");
    stringSet.insert("is");
    stringSet.insert("fast");

    string key = "slow";

    // find returns end iterator if key is not found,
    // else it returns iterator to that key

    if (stringSet.find(key) ==
    stringSet.end())
        cout << key << " not found" << endl << endl;
    else
        cout << "Found " << key << endl << endl;

    key = "c++";
    if (stringSet.find(key) == stringSet.end())
        cout << key << " not found\n";
    else
        cout << "Found " << key << endl;

    // now iterating over whole set and printing its
    // content
    cout << "\nAll elements : ";
    unordered_set<string>::iterator itr;
    for (itr = stringSet.begin(); itr != stringSet.end();
         itr++){
        cout << (*itr) << endl;
    }
    //checking element present or not in the set;
      // checking if element 20 is present in the set
    if (sampleSet.count(20) == 1) {
        cout << "\nElement 20 is present in the set";
    }
    else {
        cout << "\nElement 20 is not present in the set";
    }
    //insertion function in set
     charSet.insert(s[right]);


     // set can be iniitialize like this
     unordered_set<string> wordSet(wordDict.begin(), wordDict.end());

    //count fuction
    The count function returns either 0 or 1:

0: The element is not present in the set.
1: The element is present in the set (because unordered_set only holds unique elements, so the count can only be 0 or 1).

                    if (rows[r].count(value) || cols[c].count(value) || boxes[boxIndex].count(value)) {
                    return false;
                }


    return 0;
}
What seen.count(key) Does:
Purpose: seen.count(key) checks whether the element key exists in the container seen.
Return Value:
Returns 1 if the element exists in the unordered_set.
Returns 0 if the element does not exist.
For unordered_set, the values are unique, so count() will always return either 0 or 1

// for remove element from set
mySet.erase(3);
//for erasing  all set element
mySet.clear();
//for finding element in set
if (mySet.find(3) != mySet.end()) {
    cout << "Element found in set";
}
else {
    cout << "Element not found in set";
}




