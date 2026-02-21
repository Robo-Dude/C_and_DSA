// C++ Program To Check And Print Neon Number in a Given Range

// A neon number is a number where the sum of digits of the square of the number is equal to the number. The task is to check and print neon numbers in a range.

// Examples: 

// Input: 9
// Output: Neon Number
// Explanation: square is 9*9 = 81 and 
// sum of the digits of the square is 9.

// Input: 12
// Output: Not a Neon Number
// Explanation: square is 12*12 = 144 and 
// sum of the digits of the square is 9 (1 
// + 4 + 4) which is not equal to 12.


#include <iostream>

using namespace std;

int main(){

    int n, square, sum{0};

    cout << "Enter the number: " ;

    cin >> n;

    square = n * n;

    while(square >= 1){

        sum = sum + square % 10;

        square = square / 10;

    }

    // cout << sum << endl;

    if (n == sum) {

        cout << "Neon Number" << endl;

    }
    else{

        cout << "Not a Neon Number" << endl;
    }
}