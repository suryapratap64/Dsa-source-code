#include <bits/stdc++.h>
#include <vector>

// Find the maximum number of candies a child currently has.
int maxCandies = *max_element(candies.begin(), candies.end());

using namespace std;
int main()
{
    vector<int> v;
    cout << "size  " << v.capacity() << endl;

    v.push_back(1);
    cout << "size of vector   " << v.capacity() << endl;
    // ek vector me ek direct vector push kar sakte hai;
   // ans.push_back({nums[i], nums[left], nums[right]}); // 15
    v.push_back(8);
    v.push_back(7);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    // abhishek shortcut
    v.insert(v.begin() + 2, 5);
    // checking for sorting function
    //! is_sorted(box.begin(),box.end());
    v.push_back(3);
    v.push_back(7);
    cout << "size of vector   " << v.capacity() << v.size() << endl;
    // function for sorting vector;
    sort(v.begin(), v.end());
    // erasing element relative to first element;
    v.erase(v.end() - 2);
    cout << "front-" << v.front();
    cout << "back" << v.back();
    for (auto i : v)
        cout << i << " ";
    cout << endl;
    v.pop_back();
    // deleting lement ned of  the array


    //delete all chars element

    chars.clear(); // Clear the original chars array
    for (auto i : v)
    cout << i << " ";
    vector<pair<int, int>> mirrored = earring;
     means that we are creating a copy of the earring vector into a new vector called mirrored


    // printing for arrray 5 is the size and 9 is the number which is print;
    vector<int> a(5, 9);
    for (int i : a)
        cout << i << "  ";
    vector<int> last(a);
    // If the element is found, erase it
    int i = 0;
    if (i != v.end())
    {
        v.erase(i);
    }
    // erasing of element
    int main()
    {
        std::vector<int> vec = {1, 2, 3, 4, 5};

// simle erase function 
 nums.erase(nums.begin() + i);
        // Delete the element with value 3
        vec.erase(std::remove(vec.begin(), vec.end(), 3), vec.end());

        // Print the modified vector
        for (int v : vec)
        {
            std::cout << v << " ";
        }
        // vector me size deffined karne ke baad uske baad push back hota hai;
        vector<int> v(n, -1);
        // v(n, -1);: This part initializes the vector v with n elements, each of which is set to -1
        // If n = 5, then v will be a vector containing five elements: [-1, -1, -1, -1, -1]

        return 0;
        // creation ek saath kai vector learn from robber house problem
        vector<int> first, second;

        // back function of accessing last element
        The back() function in C++ is used to access the last element of a vector.In the context of the line :
         newRow[i] = prevRows.back()[i - 1] + prevRows.back()[i];
        vector<int> vec = {11, 23, 45, 99, 9};

        // Printing the last element
        cout << vec.back();
        // Printing the first element of the vector
        cout << vec.front();

        // sum of vector by accumulate function
        std::vector<int> nums = {1, 2, 3, 4, 5};
        int sum = accumulate(nums.begin(), nums.end(), 0);
        std::cout << "Sum: " << sum << std::endl;
        return 0;

        // reversing the sorting vector in decending order;
        sort(ans.begin(), ans.end(), greater<int>());
        // greater<int>():
        // Without the comparator, sort() arranges the elements in ascending order. By using greater<int>(), you are explicitly instructing sort() to use the > operator to sort the elements in descending order.
    }

    // The line vector<vector<int>> perms = permute(remainingNums); is from C++ and performs the following actions:

    // vector<vector<int>> perms: This declares a variable perms which is a two-dimensional vector of integers (a vector of vectors). It can be thought of as a container that will hold multiple vectors of integers, representing a collection of integer sequences or permutations.

    // permute(remainingNums): This calls a function named permute, passing remainingNums as an argument. The permute function is presumably designed to generate all possible permutations of the elements within remainingNums. The function returns a two-dimensional vector of integers, with each inner vector representing one permutation.

    // =: The result of permute(remainingNums) is assigned to the variable perms. Thus, perms now contains all the permutations generated by the permute function.

    return 0;

    //return for empty vector 
        vector<vector<int>> generate(int numRows) {
        if (numRows == 0) return {};
        if (numRows == 1) return {{1}};

    //copying the vector
         vector<vector<int>> prevRows = generate(numRows - 1);
   //sum of element in vector for n element 
   int sum = accumulate(v.begin(), v.begin() + min(3, n), 0); // Sum top 3 or all if n < 3
}