// Natural numbers include all positive integers from 1 to infinity. It does not include zero (0). Given a number n, find the sum of the first n natural numbers. To calculate the sum, we will use the recursive function recur_sum().

// Sum of first N numbers
 
// Examples: 

// Input: 3
// Output: 6
// Explanation: 1 + 2 + 3 = 6


// Input: 5
// Output: 15
// Explanation: 1 + 2 + 3 + 4 + 5 = 15

// The Sum of Natural Numbers Using Recursion
// Below is a C++ program to find the sum of natural numbers up to n using recursion:

#include <iostream>

using namespace std;

int sum_n_recurive(int n){

    if (n == 1){

        return 1;
    }
    

    return sum_n_recurive(n -1) + n; 
}

int main(){

    int n;

    cout << "Enter: ";

    cin >> n;

    cout << "Sum of n natural number is: " << sum_n_recurive(n) << endl;

    return 0;
}