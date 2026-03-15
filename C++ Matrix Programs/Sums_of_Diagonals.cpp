// C++ Program to Efficiently Compute Sums of Diagonals of a Matrix
// Given a 2D square matrix, find the sum of elements in Principal and Secondary diagonals. For example, consider the following 4 X 4 input matrix.
 
// A00 A01 A02 A03
// A10 A11 A12 A13
// A20 A21 A22 A23
// A30 A31 A32 A33
// The primary diagonal is formed by the elements A00, A11, A22, A33. 
 
// Condition for Principal Diagonal: The row-column condition is row = column. 
// The secondary diagonal is formed by the elements A03, A12, A21, A30.
// Condition for Secondary Diagonal: The row-column condition is row = numberOfRows - column -1.
// Examples :

// Input: 
// 4
// 1 2 3 4
// 4 3 2 1
// 7 8 9 6
// 6 5 4 3
// Output:
// Principal Diagonal: 16
// Secondary Diagonal: 20

// Input:
// 3
// 1 1 1
// 1 1 1
// 1 1 1
// Output:
// Principal Diagonal: 3
// Secondary Diagonal: 3

#include <iostream>
#include <vector>

using namespace std;

int main(){

    int N;

    cout << "Sums of Diagonals of a Matrix";

    cout << "Enter the length: ";

    cin >> N;

    int A[N][N];

    for(int i = 0; i < N; i++){

        for(int j = 0; j < N; j++){

            cin >> A[i][j];
        }
    }

    int principal_diagonal_sum = 0;
    int Secondary_diaagonal_sum = 0;

    for(int i = 0; i < N; i++){

        principal_diagonal_sum += A[i][i];

    }

    for(int i = 0; i < N; i++){

        Secondary_diaagonal_sum += A[i][N - 1 - i];

    }

    cout << "principal_diagonal_sum: " << principal_diagonal_sum << endl;
    cout << "Secondary_diaagonal_sum: " << Secondary_diaagonal_sum << endl;

    return 0;

}
