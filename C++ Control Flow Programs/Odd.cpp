// C++ Program to Check Whether Number is Even or Odd
// Last Updated : 23 Jul, 2025
// A number is even if it is completely divisible by 2 and it is odd if it is not completely divisible by 2. 
// In this article, we will learn how to check whether a number is even or odd in C++.

// Examples

// Input: n = 11
// Output: Odd
// Explanation: Since 11 is not completely divisible by 2, it is an odd number.

// Input: n = 20
// Output: Even
// Explanation: Since 20 is completely divisible by 2, it is an even number.

// Check if a Number is Even or Odd in C++
// The simplest method to determine if a given number is even or odd is by checking the remainder 
// left when the number is divided by 2. The modulo operator (%) in C++ returns remainder after the division. 
// So, using an if-else or any other conditional statement, we check if the remainder of the number 
// divided by 2 is 0. If it is 0, the number is even. Otherwise, the number is odd.


#include <iostream>
#include <string.h>

using namespace std;

string check(int n){

    if (n%2 == 0){

        return "Even";
    }
    else{

        return "Odd";
    }

}

int main(){

    double n;

    cout << "Enter the number: " ;

    cin >> n;

    cout << check(n) << endl;

    return 0;
}