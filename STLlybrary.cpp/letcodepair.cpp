class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {

        unordered_map<int,int> list;

        vector<pair<int,int>> turn;

        vector<int> sol;

        for(const auto& i : nums) list[i]++;
        In summary, the code for(const auto& i : nums) is both efficient and safe:

It avoids unnecessary copies of the elements by using a reference (&).
It ensures that the elements cannot be accidentally modified by using const.

        for(const auto& pair : list)  turn.emplace_back(pair.second, pair.first);

// The function .emplace_back() is a method used with C++ standard library containers like std::vector to add a new element to the end of the container. It is similar to .push_back(), but it has some differences in terms of how it handles object creation, especially with regard to efficiency.



        sort(turn.begin(), turn.end());

        for(auto it = turn.rbegin(); it != turn.rend(); ++it)
//         The method rbegin() in C++ is used to get a reverse iterator to the last element of a container, which allows you to iterate through the container in reverse order (from the last element to the first). Let's break this down:

// rbegin() and rend():
// rbegin(): This method returns a reverse iterator that points to the last element of the container.
// rend(): This method returns a reverse iterator that points just before the first element of the container (i.e., one past the "beginning" when iterating in reverse). This acts as the ending point for the reverse iteration. 
        {
            sol.push_back(it->second);

            k--;

            if(k == 0) break;
        }

        return sol;

        
    }
};