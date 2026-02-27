// C++ Program To Print Inverted Hollow Star Pyramid Pattern

// Given the value of R(number of rows), write a C++ program to print the Inverted Hollow Pyramid using stars and white spaces.

// Examples:

// Input: R = 5

// Output:

// *********
//  *     *
//   *   *
//    * *
//     *

// Input: R = 10

// Output:

// *******************
//  *               *
//   *             *
//    *           *
//     *         *
//      *       *
//       *     *
//        *   *
//         * *
//          *
// Algorithm:

// At first, take the number of rows as input.
// The next step is to implement the nested loop to print this pattern.
// A space-maintaining variable(sp) is required to maintain the space at the beginning.
// Calculate the last column by Last Column = (length _of_row * 2 - (2 * Current_row - 1))
// Print star( "*" ) at the first column and last column and proceed to the next row.

#include <iostream>

using namespace std;

int main(){

    int n;

    cout << "Enter: ";

    cin >> n;

    for(int i = n; i >= 1; i--){

        for(int j = 1; j < (2*n - (n - i)); j++){

            if (i == n){
                cout << "* ";
            }
            if (i < n){

                if (j == (n - i) + 1){

                    cout << "* ";
                }
                else if (j == ((2*n - (n - i)) - 1)){

                    cout << "* ";
                }
                else{
                    cout << "  ";
                }
            }

        }
        cout << endl;
    }

    return 0;
}