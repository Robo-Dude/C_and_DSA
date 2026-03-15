// C++ Program To Check if Two Matrices are Identical

// The below program checks if two square matrices of size 4*4 are identical or not. 
// For any two matrices to be equal, the number of rows and columns in both the matrix 
// should be equal and the corresponding elements should also be equal. 


#include <iostream>

using namespace std;

#define N 4

int check(int A[N][N], int B[N][N]){

    for(int i = 0; i < N; i++){

        for(int j = 0; j < N; j++){

            if (A[i][j] != B[i][j]){
                return 0;
            }

        }
    }

    return 1;
}

int main(){

    int A[N][N] = {{1, 1, 1, 1}, {2, 2, 2 ,2}, {3, 3, 3, 3}, {4, 4, 4, 4}};

    int B[N][N] = {{1, 1, 1, 1}, {2, 2, 2 ,2}, {3, 3, 3, 3}, {4, 4, 4, 4}};

    int C[N][N];

    if (check(A, B)){

        cout << "Equal Maxtrix" << endl;
    }
    else{

        cout << "Not Equal" << endl;
    }

    return 0;

}



