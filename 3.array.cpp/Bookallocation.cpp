#include <bits/stdc++.h>
using namespace std;

// Helper function to check if it's possible to allocate books
// such that no student reads more than 'maxPages'
bool isPossible(int arr[], int n, int m, int maxPages) {
    int studentCount = 1;
    int pagesSum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxPages) {
            // A single book has more pages than maxPages → not possible
            return false;
        }

        if (pagesSum + arr[i] > maxPages) {
            // Allocate to next student
            studentCount++;
            pagesSum = arr[i];

            if (studentCount > m) {
                return false; // Not enough students
            }
        } else {
            pagesSum += arr[i];
        }
    }
    return true;
}

// Function to find minimum possible max pages
int bookAllocation(int arr[], int n, int m) {
    if (m > n) return -1; // More students than books → impossible

    int sum = accumulate(arr, arr + n, 0); // Sum of all pages
    int start = 0;                         // Minimum pages = 0
    int end = sum;                         // Maximum pages = total pages
    int ans = -1;

    // Binary search on answer
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (isPossible(arr, n, m, mid)) {
            ans = mid;       // Valid solution, try to minimize further
            end = mid - 1;
        } else {
            start = mid + 1; // Try a higher limit
        }
    }

    return ans;
}

int main() {
    int arr[8] = {5, 54, 3, 6, 36, 3, 3, 6};
    int n = 8; // Number of books
    int m;
    cin >> m;  // Number of students

    int result = bookAllocation(arr, n, m);
    if (result != -1)
        cout << "Minimum max pages per student = " << result << endl;
    else
        cout << "Allocation not possible" << endl;

    int low = *max_element(pages.begin(), pages.end());
    int high = accumulate(pages.begin(), pages.end(), 0);
    int ans = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (isPossible(pages, m, mid)) {
            ans = mid;
            high = mid - 1; // try smaller max
        } else {
            low = mid + 1;  // try larger max
        }
    }
    return ans;
}

int main() {
    vector<int> pages = {12, 34, 67, 90};
    int m = 2;
    cout << "Minimum possible maximum pages: "
         << bookAllocation(pages, m) << endl;
    return 0;
}
