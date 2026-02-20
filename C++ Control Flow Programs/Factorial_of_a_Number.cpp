// C++ Program To Find Factorial Of A Number
// The Factorial of a non-negative integer is the multiplication of all integers smaller than or equal to n. For example, the factorial of 6 is 6*5*4*3*2*1 which is 720. 

// Factorial of a number
 
// Recursive Solution
// Factorial can be calculated using the following recursive formula.

//   n! = n * (n-1)!
//   n! = 1 if n = 0 or n = 1
// Below is the C++ program to find the factorial of a number using a recursive solution:


#include <iostream>

using namespace std;

int compute_factorial(int n) {

    int factor {1};

    if (n == 0) 
        return 0; 

    while(n > 1){

        factor = factor * (n);

        n--;
    }

    return factor;
}

int recurive_factorial(int n) {

    if (n == 1){

        return n;

    }else if (n == 0){

        return 0;
    }

    return recurive_factorial(n - 1) * n;

}

int main(){

    int n;

    cout << "Enter the number: " ;

    cin >> n;

    cout << "Factorial of " << n << " is: " << compute_factorial(n) << endl;
    cout << "Factorial of " << n << " is: " << recurive_factorial(n) << endl;

    return 0;

}

