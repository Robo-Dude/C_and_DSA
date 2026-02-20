// GCD of Two Numbers in C++
// Last Updated : 16 Jan, 2026
// GCD (Greatest Common Divisor) or HCF (Highest Common Factor) of two numbers is the largest number that exactly divides both numbers. For example, gcd of 12 and 16 is 4.

// In this article, we will learn to write a C++ program to find the GCD of two numbers.

#include <iostream>

using namespace std;

int gcd(int a, int b){

    int min_value = ((a < b) ? a:b) - 1;

    // cout << min_value << endl;

    while (min_value > 1){

       if (a % min_value == 0 && b % min_value == 0 ){

            break;

       }
       min_value--;

    }

    return min_value;

}

int main(){

    int a, b;

    cout << "Enter any two number: ";

    cin >> a>> b;

    cout << "GCD or HCF of given two number is : " << gcd(a, b) << endl;

    return 0;

}