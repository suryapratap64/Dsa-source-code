/* 
C++ program to demonstrate a 2D vector where 
each of its elements is of different size. 
*/
#include <iostream> 
#include <vector> 
using namespace std; 
int main() 
{ 
	/* 
	We initialize a 2D vector 
	named "vect" on line 16 with 
	different number of values 
	in each element. 
	*/
	
	vector<vector<int>> vect 
	{ 
		/* Element one with 2 values in it. */
		{1, 2}, 
		
		/* Element two with 3 values in it. */
		{4, 5, 6}, 
		
		/* Element three with 4 values in it. */
		{7, 8, 9, 10} 
	}; 
	  // Get the size of the specified row
    int  rowSize = matrix[rowIndex].size();

/////////////
int rowIndex = 1;
    std::vector<int> row = matrix[rowIndex];

    // Print the row
    std::cout << "Row " << rowIndex << ": ";
    for (int value : row) {
        std::cout << value << " ";
    }

	/* 
	Now we print the vector that we 
	just defined using a simple 
	nested for loop. 
	*/
	
	for (int i = 0; i < vect.size(); i++) 
	{ 
		for (int j = 0; j < vect[i].size(); j++) 
		{ 
			cout << vect[i][j] << " "; 
		}	 
		cout << endl; 
	} 
	return 0; 
}	 
vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
//vector<int> current = intervals[0];: This line creates a new vector called current and initializes it with the values of intervals[0] (i.e., {1, 3} in this example).
