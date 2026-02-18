// C++ Program to Find Largest Among Three Numbers

// Given three numbers, the task is to find the largest number among them in C++.

// Examples

// Input: a = 1, b = 2, c = 11
// Output: 11
// Explanation: Since 11 is the largest number among all numbers.

// Input: a = 9, b = 7, c = 5
// Output: 9
// Explanation: Since 9 is the largest number among all numbers.


#include <iostream>

using namespace std;

// Find Largest Among Three Numbers in C++
// The simplest approach is to use the if-else-if ladder to find the largest of three numbers. First, we find the larger number among two of the numbers. Then compare this larger number to the third number to find the largest.

// Approach
// Consider a, b and c to be the three numbers:

// First, check if a is greater than both b and c. If yes, then a is the largest.
// If a is not the largest, check if b is greater than or equal to c. If yes, then b is the largest.
// If neither of these conditions is true, then c is the largest.


int largest(int a, int b, int c){

    if (a > b && a > c){
        return a;
    }
    else if (b > a && b > c){
        return b;
    }
    else{
        return c;
    }

}


// Other Methods to Find Largest Among Three Numbers
// Apart from if-else statement, there are also the other methods by which we can find the largest among three numbers in C++.

// Using Inbuilt Function
// In C++, the std::max() function can be used to find the largest value among the given set of values. Traditionally, it could only find the maximum of two numbers at once, however, starting from C++11, std::max() can also accept a set of values as initializer list (i.e. values inside braces {} ).

#include <algorithm>

int main() {

    int a, b, c;

    cout << "Enter the three number: ";

    cin >> a >> b >> c;

    cout << "The largest number is : " << largest(a, b, c) << endl;

    cout << "using second method : " << max({a, b, c}) << endl;

    return 0;
}


