// C++ Program To Print Multiplication Table of a Number
// Last Updated : 16 Jan, 2026
// A multiplication table displays the multiples of a given number from 1 to 10. This article explains how to generate and print the multiplication table of a number using C++ programming.

// Steps:

// Initialize loop with loop variable i ranging from 1 to 10.
// In each iteration, print the product: i * num.
// Terminate loop when i  > 10.

#include <iostream>

using namespace std;


void multiply_10(int var){

    for(int i = 1; i <= 10; i++){
        cout << var << " * " << i << " = " << var*i << endl;
    }
}

int main() {

    int var;

    cout << "Enter the number: " ;

    cin >> var;

    multiply_10(var);

    return 0;


}