#include <numeric>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int sum = std::accumulate(nums.begin(), nums.end(), 0);
    std::cout << "Sum: " << sum << std::endl;
    return 0;
//     nums.begin(): The iterator to the start of the range (inclusive).
// nums.end(): The iterator to the end of the range (exclusive).
// 0: The initial value for the sum. This value is where the accumulation starts.
}