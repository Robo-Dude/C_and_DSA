// C++ Program to Print a 2D Array
// Last Updated : 19 Jul, 2022
// Here we will see how to print a 2D array using a C++ program. Below are the examples:

// Input: {{1, 2, 3},
//            {4, 5, 6},
//            {7, 8, 9}}
// Output: 1 2 3 
//               4 5 6
//               7 8 9


// Input: {{11, 12, 13},
//             {14, 15, 16}}
// Output: 11 12 13
//               14 15 16

// There are 2 ways to print a 2D array in C++:

// Using for loop.
// Using range-based for loop.
// Let's start discussing each of these methods in detail.

// 1. Using for loop
// The general method to print a 2D array using for loop requires two for loops to traverse all the rows and columns of the given 2D matrix and print the elements.

// The outer loop will loop from index 0 to row_length-1.
// It traverses the 2D array row-wise, therefore the first row is printed then it goes to print the second row.

#include <iostream>

using namespace std;

int main(){

    const int n = 3;
    const int m = 3;

    int arr[n][m] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for(int i = 0; i < n; i++){

        for(int j = 0; j < m; j++){

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

}