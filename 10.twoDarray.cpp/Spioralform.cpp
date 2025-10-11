#include <bits/stdc++.h>
using namespace std;

// Function to return elements of matrix in spiral order
vector<int> spiralOrder(vector<vector<int> >& matrix) {
    int m = matrix.size();       // Number of rows
    int n = matrix[0].size();    // Number of columns
    vector<int> ans;

    if (m == 0)
        return ans;

    // Matrix to keep track of visited cells
    vector<vector<bool>> seen(m, vector<bool>(n, false));

    // Direction arrays:
    // dr = change in row index
    // dc = change in column index
    // Order: RIGHT (0,1), DOWN (1,0), LEFT (0,-1), UP (-1,0)
    int dr[] = {0, 1, 0, -1};  // row movement
    int dc[] = {1, 0, -1, 0};  // column movement

    int x = 0, y = 0;  // Start from top-left corner
    int di = 0;        // direction index, starts with 0 = RIGHT

    // Traverse all m * n elements
    for (int i = 0; i < m * n; i++) {
        ans.push_back(matrix[x][y]); // Add current element
        seen[x][y] = true;           // Mark current cell as visited

        // Calculate next cell based on current direction
        int newX = x + dr[di];
        int newY = y + dc[di];

        // Check if the next cell is within bounds and not visited
        if (0 <= newX && newX < m && 0 <= newY && newY < n && !seen[newX][newY]) {
            x = newX;
            y = newY;
        } else {
            // Change direction: (RIGHT→DOWN→LEFT→UP→RIGHT...)
            di = (di + 1) % 4;
            x += dr[di];
            y += dc[di];
        }
    }

    return ans;
}

// Driver code
int main() {
    vector<vector<int>> a{
        { 1,  2,  3,  4 },
        { 5,  6,  7,  8 },
        { 9, 10, 11, 12 },
        {13, 14, 15, 16 }
    };

    // Print matrix in spiral order
    for (int x : spiralOrder(a)) {
        cout << x << " ";
    }

    return 0;
}


// // C++ program for the above approach

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> spiralOrder(vector<vector<int> >& matrix)
// {
// 	int m = matrix.size(), n = matrix[0].size();
// 	vector<int> ans;

// 	if (m == 0)
// 		return ans;

// 	vector<vector<bool> > seen(m, vector<bool>(n, false));
// 	int dr[] = { 0, 1, 0, -1 };
// 	int dc[] = { 1, 0, -1, 0 };

// 	int x = 0, y = 0, di = 0;

// 	// Iterate from 0 to m * n - 1
// 	for (int i = 0; i < m * n; i++) {
// 		ans.push_back(matrix[x][y]);
// 		// on normal geeksforgeeks ui page it is showing
// 		// 'ans.push_back(matrix[x])' which gets copied as
// 		// this only and gives error on compilation,
// 		seen[x][y] = true;
// 		int newX = x + dr[di];
// 		int newY = y + dc[di];

// 		if (0 <= newX && newX < m && 0 <= newY && newY < n
// 			&& !seen[newX][newY]) {
// 			x = newX;
// 			y = newY;
// 		}
// 		else {
// 			di = (di + 1) % 4;
// 			x += dr[di];
// 			y += dc[di];
// 		}
// 	}
// 	return ans;
// }

// // Driver code
// int main()
// {
// 	vector<vector<int> > a{ { 1, 2, 3, 4 },
// 							{ 5, 6, 7, 8 },
// 							{ 9, 10, 11, 12 },
// 							{ 13, 14, 15, 16 } };

// 	// Function call
// 	for (int x : spiralOrder(a)) {
// 		cout << x << " ";
// 	}
// 	return 0;
// }

// // This code is contributed by Yashvendra Singh
