#include <iostream>
using namespace std;
// Find the number of rows
int rows = matrix.size();  // size of the outer vector
    
    // Find the number of columns (assuming the matrix is non-empty)
int cols = matrix[0].size();  // size of the first inner vector (number of elements in the first row)

int main() {
    // Define the matrix
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Get the number of rows and columns
    int rows = 3;
    int cols = 3;

    // Print the matrix column-wise
    for (int col = 0; col < cols; col++) {
        for (int row = 0; row < rows; row++) {
            cout << matrix[row][col] << " ";
        }
        cout << endl; // New line after each column
    }

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Ask the user for the size of the matrices
    int rows1, cols1, rows2, cols2;
    cout << "Enter the number of rows and columns for the first matrix: ";
    cin >> rows1 >> cols1;

    cout << "Enter the number of rows and columns for the second matrix: ";
    cin >> rows2 >> cols2;

    // Initialize two matrices with variable sizes using vectors
    vector<vector<int>> S1(rows1, vector<int>(cols1, 0)); // Initialized with zeros
    vector<vector<int>> S2(rows2, vector<int>(cols2, 0)); // Initialized with zeros

    // Optional: Fill matrices with specific values from user input
    cout << "Enter values for the first matrix:" << endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            cin >> S1[i][j];
        }
    }

    cout << "Enter values for the second matrix:" << endl;
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            cin >> S2[i][j];
        }
    }

    // Print the first matrix
    cout << "First matrix:" << endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            cout << S1[i][j] << " ";
        }
        cout << endl;
    }

    // Print the second matrix
    cout << "Second matrix:" << endl;
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            cout << S2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

