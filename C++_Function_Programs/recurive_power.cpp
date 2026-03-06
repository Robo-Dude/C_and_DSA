// C++ Program To Calculate the Power of a Number
// Last Updated : 23 Jul, 2025
// Write a C++ program for a given two integers x and n, write a function to compute xn. We may assume that x and n are small and overflow doesn’t happen.program to calculate pow(x,n)

// Examples :

// Input : x = 2, n = 3
// Output : 8

// Input : x = 7, n = 2
// Output : 49

// Program to calculate pow(x, n) using Naive Approach:
// A simple solution to calculate pow(x, n) would multiply x exactly n times. We can do that by using a simple for loop

#include <iostream>

using namespace std;

int recursive_pow(int x , int n){

    if (n == 1){

        return x;
    }

    return recursive_pow(x, n - 1) * x;
}

int main(){

    int num, pow;

    cout << "Enter number and power: ";

    cin >> num >> pow;

    cout << recursive_pow(num, pow) << endl;

}