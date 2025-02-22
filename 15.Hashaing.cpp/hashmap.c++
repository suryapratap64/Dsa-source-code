#include <iostream>
#include <vector>
#include <list>
#include <utility>  // for std::pair
#include <string>   // for std::string

class HashMap {
private:
    // Define a fixed size for the hash map
    static const int SIZE = 10;

    // Buckets as a vector of lists (separate chaining)
    std::vector<std::list<std::pair<std::string, int>>> buckets;

    // Hash function to convert a key into a bucket index
   int hashFunction(const std::string& key) {
    int hash = 0; // Initialize the hash value to 0.
    for (char ch : key) { // Loop through each character in the string.
        hash += ch; // Add the ASCII value of the character to the hash.
    }
    return hash % SIZE; // Take the modulo of the accumulated sum with SIZE.
}


public:
    // Constructor to initialize the hash map with empty buckets
    HashMap() {
        buckets.resize(SIZE);
    }

    // Insert a key-value pair into the hash map
    void insert(const std::string& key, int value) {
        int index = hashFunction(key);
        auto& bucket = buckets[index];

        // Check if the key already exists in the bucket
        for (auto& pair : bucket) {
            if (pair.first == key) {
                pair.second = value;  // Update value if key is found
                return;
            }
        }

        // Key doesn't exist, so add a new key-value pair
        bucket.emplace_back(key, value);
    }

    // Retrieve the value associated with a given key
    int get(const std::string& key) {
        int index = hashFunction(key);
        const auto& bucket = buckets[index];

        // Search for the key in the bucket
        for (const auto& pair : bucket) {
            if (pair.first == key) {
                return pair.second;
            }
        }

        // If the key is not found, return a sentinel value (e.g., -1)
        return -1;  // Or throw an exception, depending on requirements
    }

    // Remove a key-value pair from the hash map
    void remove(const std::string& key) {
        int index = hashFunction(key);
        auto& bucket = buckets[index];

        // Search for the key in the bucket and erase it if found
        for (auto it = bucket.begin(); it != bucket.end(); ++it) {
            if (it->first == key) {
                bucket.erase(it);
                return;
            }
        }
    }
};

// Main function to demonstrate the HashMap usage
int main() {
    HashMap hashMap;

    // Insert some key-value pairs
    hashMap.insert("apple", 3);
    hashMap.insert("banana", 7);
    hashMap.insert("cherry", 2);

    // Retrieve values
    std::cout << "Value for 'apple': " << hashMap.get("apple") << std::endl;
    std::cout << "Value for 'banana': " << hashMap.get("banana") << std::endl;
    std::cout << "Value for 'cherry': " << hashMap.get("cherry") << std::endl;

    // Remove a key-value pair
    hashMap.remove("banana");

    // Try retrieving the removed key
    std::cout << "Value for 'banana' after removal: " << hashMap.get("banana") << std::endl;

    return 0;
}
