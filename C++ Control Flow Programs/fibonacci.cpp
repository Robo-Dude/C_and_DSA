// C++ Program For Fibonacci Numbers

// The Fibonacci series is the sequence where each number is the sum of the previous two numbers. The first two numbers of the Fibonacci series are 0 and 1, and they are used to generate the entire series.

// Examples:

// Input: 5
// Output: 5
// Explanation: As 5 is the 5th Fibonacci number of series 0, 1, 1, 2, 3, 5, 8, 13.... (0-based indexing)

// Input: 1
// Output: 1
// Explanation: As 1 is the 1st Fibonacci number of series 0, 1, 1, 2, 3, 5, 8, 13.... (0-based indexing)

// Following are the different ways to find the given term of the Fibonacci series in C++:

#include <iostream>

using namespace std;

int fib(int n){

    for(int i = n; i > 0; i--){

        int sum = (i-2) + (i-1);

        if (sum == n){
            cout << "" ;
        }
    }
}

int main(){

    int n;

    cout << "Enter the number: ";

    cin >> n;

    fib(n);



}