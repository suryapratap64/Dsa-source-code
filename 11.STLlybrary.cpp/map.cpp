#include<bits/stdc++.h>
using namespace std;
/*Maps are associative containers that store elements in a mapped fashion. Each element has a key value and a mapped value. No two mapped values can have the same key values.*/
int main (){
    map<int,string> m;
    //creating a two map at once
      unordered_map<char,int>map1,map2;
    
    m[1]="babbr";
    m[2]="surya";
    m[3]="pratap";

    for(auto i:m){
        cout<<i.first<<" "<<i.second;
        m.insert({5,"bheem"});
        cout<<"finding -13"<<m.count(-3);
        m.erase(3);

        cout<<"after erase";
        for (auto i:m){
            cout<<i.first<<i.second;

        }
        auto it=m.find(5);
        for(auto i=it;i!=m.end();i++){
            cout<<(*i).first;
            }


    }

    
    // Sort by value
    sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
        return a.second < b.second; // ascending order of values
    });

    //clear bassic concepts of map
     map<string, int> mp;
        string s = "";
string paragraph;
        for (int i = 0; i < paragraph.size(); i++) {
            if ((paragraph[i] >= 'a' && paragraph[i] <= 'z') || (paragraph[i] >= 'A' && paragraph[i] <= 'Z')) {
                s.push_back(tolower(paragraph[i]));
            } else if (!s.empty()) {
                mp[s]++;
                s = "";
            }
        }
     map<string, int> mp;

    // Insert some values into the map
    mp["one"] = 1;
    mp["two"] = 2;
    mp["three"] = 3;

    // Get an iterator pointing to the first element in the
    // map
    map<string, int>::iterator it = mp.begin();
   //  auto it = mp.find(key);

    // Iterate through the map and print the elements
    while (it != mp.end()) {
        cout << "Key: " << it->first
             << ", Value: " << it->second << endl;
        ++it;
    }
     // empty map container
    map<int, int> gquiz1;

    // insert elements in random order
    gquiz1.insert(pair<int, int>(1, 40));
    gquiz1.insert(pair<int, int>(2, 30));
    gquiz1.insert(pair<int, int>(3, 60));
    gquiz1.insert(pair<int, int>(4, 20));
    gquiz1.insert(pair<int, int>(5, 50));
    gquiz1.insert(pair<int, int>(6, 50));

    // another way of inserting a value in a map
    gquiz1[7] = 10;

    // printing map gquiz1
    map<int, int>::iterator itr;
    cout << "\nThe map gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    cout << endl;

    // assigning the elements from gquiz1 to gquiz2
    map<int, int> gquiz2(gquiz1.begin(), gquiz1.end());

    // print all elements of the map gquiz2
    cout << "\nThe map gquiz2 after"
         << " assign from gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    cout << endl;

    // remove all elements up to
    // element with key=3 in gquiz2
    cout << "\ngquiz2 after removal of"
            " elements less than key=3 : \n";
    cout << "\tKEY\tELEMENT\n";
    gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }

    // remove all elements with key = 4
    int num;
    num = gquiz2.erase(4);
    cout << "\ngquiz2.erase(4) : ";
    cout << num << " removed \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }

    cout << endl;

    // lower bound and upper bound for map gquiz1 key = 5
    cout << "gquiz1.lower_bound(5) : "
         << "\tKEY = ";
    cout << gquiz1.lower_bound(5)->first << '\t';
    cout << "\tELEMENT = " << gquiz1.lower_bound(5)->second
         << endl;
    cout << "gquiz1.upper_bound(5) : "
         << "\tKEY = ";
    cout << gquiz1.upper_bound(5)->first << '\t';
    cout << "\tELEMENT = " << gquiz1.upper_bound(5)->second
         << endl;

    return 0;

    // how so push or increase element in map
    vector<int> majorityElement(vector<int>& nums) {
        // Create a frequency map to store the count of each element
        unordered_map<int, int> elementCountMap;
        
        // Iterate through the input array to count element occurrences
        for(int i = 0; i < nums.size(); i++) {
            elementCountMap[nums[i]]++;
        }
    }
    //searching in map
    myMap["apple"] = 5;
    myMap["banana"] = 3;
    myMap["cherry"] = 7;

    // Search for a key
    std::string key = "banana";
    if (myMap.find(key) != myMap.end()) {
        // Key found, access its value
        std::cout << key << " has a value of " << myMap[key] << std::endl;
    } else {
        // Key not found
        std::cout << key << " not found in the map." << std::endl;
    }

    //increasing the frequency of map by auto loop
    unordered_map<int, int> mp;
    for (int i : nums) {
    mp[i]++;  // 'i' is the element from the 'nums' vector

    //but in for loop we use the 
    mp[nums[i]]++;

}



}
