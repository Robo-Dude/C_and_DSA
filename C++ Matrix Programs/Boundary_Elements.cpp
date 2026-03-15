// C++ Program For Boundary Elements of a Matrix
// Printing Boundary Elements of a Matrix.
// Given a matrix of size n x m. Print the boundary elements of the matrix. Boundary elements are those elements which are not surrounded by elements on all four directions, i.e. elements in first row, first column, last row and last column. 
// Examples: 

// Input:
//         1 2 3 4  
//         5 6 7 8
//         1 2 3 4
//         5 6 7 8
// Output: 
//          1 2 3 4 
//          5     8 
//          1     4 
//          5 6 7 8
// Explanation:The boundary elements of the
// matrix is printed.

// Input:
//         1 2 3   
//         5 6 7 
//         1 2 3 
// Output: 
//         1 2 3   
//         5   7 
//         1 2 3 
// Explanation:The boundary elements of the 
// matrix is printed.

#include <iostream>

using namespace std;

int main(){

    int N;

    cout << "Printing Boundary Elements of a Matrix" << endl;

    cin >> N;
    
    int A[N][N];

    for(int i = 0; i < N; i++){

        for(int j = 0; j < N; j++){

            cin >> A[i][j];
        }
    }

    cout << endl;

    int sum = 0;

    for(int i = 0; i < N; i++){

        for(int j = 0; j < N; j++){

            if (i == 0 || i == N - 1 || j == 0 || j == N - 1){
                cout << A[i][j] << " ";
                sum += A[i][j];
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << "Sum Boundary Elements of a Matrix: " << sum << endl;

    return 0;
}