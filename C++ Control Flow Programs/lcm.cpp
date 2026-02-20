// C++ Program To Find LCM of Two Numbers
// Last Updated : 23 Jul, 2025
// LCM (Least Common Multiple) of two numbers is the smallest number that is divisible by both numbers. For example, the LCM of 15 and 20 is 60, and the LCM of 15 and 25 is 75. In this article, we will learn to write a C++ program to find the LCM of two numbers.

// LCM in C++

// We can find the LCM of two numbers in C++ using two methods:

// 1. LCM of Two Numbers Using Simple Method
// Algorithm
// Initialize two integers a and b with the two numbers for which we want to find the LCM.
// Initialize a variable max with the maximum of a and b.
// Run an infinite loop. Inside the loop, check if max is completely divisible by a and b, it means that max is the LCM of a and b.
// Else, increment max by 1 and continue the loop to check the next number.
// C++ Program To Find LCM of Two Numbers using Simple Method

#include <iostream>

using namespace std;

int main(){

    int a, b, flag{1};

    cout << "Enter any two number: ";
    
    cin >> a >> b;

    int max_num = ((a > b)? a:b);

    while(flag) {

        if (max_num % a == 0 && max_num % b == 0){

            break;
        }
        
        max_num++;

    }

    cout << "LCM of input numbers is : " << max_num << endl;

    return 0;
}


