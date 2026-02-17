// C++ Program To Multiply Two Floating-Point Numbers

// Here, we will see how to multiply two floating-point numbers using the C++ program.

// Floating point numbers are numbers that include both integer part and fractional parts represented in the form of decimal and exponential values. float data type is used to store floating point values.

// For example

// Input  :  A =1.2, B = 3.0
// Output  :  3.6


// We can multiply two floating-point numbers in C++ by using Multiplication Operator (*)

// C++ Program To Multiply Two Floating-Point Numbers
// The two floating-point numbers are multiplied using the function that uses the arithmetic operator ( * ), and the product is stored in the variable product.

#include <iostream>

using namespace std;

double mul_float(float a, float b) {  return a * b; }


int main() {

    float a,b;

    cin >> a >> b;
    cout << "Mulply of given float is : " << mul_float(a, b) << endl;


    return 0;
}