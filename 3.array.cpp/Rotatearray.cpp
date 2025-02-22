#include <iostream>
#include <vector>

void rotateArray(std::vector<int>& arr, int k) {
    int n = arr.size();
    k =k%n;  // To handle cases where k is greater than the size of the array
    std::vector<int> rotated(n);

    // Copy the last k elements to the beginning of the new array
    for (int i = 0; i < k; ++i) {
        rotated[i] = arr[n - k + i];
    }

    // Copy the first n-k elements to the remaining part of the new array
    for (int i = 0; i < n - k; ++i) {
        rotated[k + i] = arr[i];
    }

    // Copy the rotated array back to the original array
    arr = rotated;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    int k = 2;

    rotateArray(arr, k);

    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;  // Output: 4 5 1 2 3

    return 0;
}
