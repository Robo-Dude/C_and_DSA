// C++ Program For Addition of Two Matrices

// Given two N x M matrices. Find a N x M matrix as the sum of given matrices each value at the sum of values of corresponding elements of the given two matrices. In this article, we will learn about the addition of two matrices.

// Addition of Two Matrices
// Approach
// Below is the idea to solve the problem.

// Iterate over every cell of the matrix (i, j).
// Add the corresponding values of the two matrices.
// Store in a single matrix i.e. the resultant matrix.
// Algorithm
// Initialize a resultant matrix res[N][M].
// Run a for loop for counter i as each row and in each iteration:
// Run a for loop for counter j as each column and in each iteration:
// Add values of the two matrices for index i, j, and store in res[i][j].
// Return res.

#include <iostream>

using namespace std;

#define N 4

int main(){

    int A[N][N] = {{1, 1, 1, 1}, {2, 2, 2 ,2}, {3, 3, 3, 3}, {4, 4, 4, 4}};

    int B[N][N] = {{1, 1, 1, 1}, {2, 2, 2 ,2}, {3, 3, 3, 3}, {4, 4, 4, 4}};

    int C[N][N];

    for(int i = 0; i < N; i++){

        for(int j = 0; j < N; j++){

            C[i][j] = A[i][j] + B[i][j];

        }
    }

    for(int k = 0; k < N; k++){

        for(int l = 0; l < N; l++){

            cout << C[k][l] << " ";
        }
        cout << endl;
    }

}