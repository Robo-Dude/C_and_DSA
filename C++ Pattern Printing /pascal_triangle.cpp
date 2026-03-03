// C++ Program For Pascal's Triangle

// Pascal's triangle is a triangular array of the binomial coefficients. Write a function that takes an integer value n as input and prints first n lines of the Pascal's triangle. Following are the first 6 rows of Pascal's Triangle.

// 1  
// 1 1 
// 1 2 1 
// 1 3 3 1 
// 1 4 6 4 1 
// 1 5 10 10 5 1 

// Method 1 ( O(n^2) time complexity ) 
// This method is based on method 1. We know that ith entry in a line number line is Binomial Coefficient C(line, i) and all lines start with value 1. The idea is to calculate C(line, i) using C(line, i-1). It can be calculated in O(1) time using the following. 
// C(line, i)   = line! / ( (line-i)! * i! )
// C(line, i-1) = line! / ( (line - i + 1)! * (i-1)! )
// We can derive following expression from above two expressions.
// C(line, i) = C(line, i-1) * (line - i + 1) / i

// So C(line, i) can be calculated from C(line, i-1) in O(1) time
 

#include<iostream>

using namespace std;


int main(){

    int n;

    cout << "Enter: ";

    cin >> n;

    for(int i = 1; i <=n; i++){

        int c = 1;

        for(int j = 1; j <= i; j++){

            cout << c << " ";
            c = c * (i - j)/j;

        }
        cout << endl;
    }

    return 0;
}