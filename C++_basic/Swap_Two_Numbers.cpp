// Swapping numbers is the process of interchanging their values. In this article, we will learn algorithms and code to swap two numbers in the C++ programming language.

// after_swapping
// Swapping changes the values stored in variables, not their memory locations.


#include <iostream>

using namespace std;


// 1. Swap Numbers Using a Temporary Variable
// We can swap the values of the given two numbers by using another variable to temporarily store the value as we swap the variables' data. The below steps shows how to use the temporary variable to swap values.

// Steps

// Assign a to a temp variable: temp = a
// Assign b to a: a = b
// Assign temp to b: b = temp


void temp_variable(int a, int b){

    int temp = a;
    a = b;
    b = temp;

    cout << "swaped a : " << a << " and " << "b : " << b << endl;

}

// 2. Swap Numbers Without Using a Temporary Variable
// We can also swap numbers without using the temporary variable. Unlike the previous method, we use some mathematical operations to swap the values.

// Steps

// Assign to b the sum of a and b i.e. b = a + b.
// Assign to a difference of b and a i.e. a = b - a.
// Assign to b the difference of b and a i.e. b = b - a.


void without_temp_variable(int a, int b){


    b = a + b;

    a = b - a;

    b = b - a;

    cout << "swaped a : " << a << " and " << "b : " << b << endl;

}

// 3. Swap Two Numbers Using Inbuilt Function
// C++ Standard Template Library (STL) provides an inbuilt swap() function to swap two numbers.

// Syntax of swap()
// swap(a, b);

// where a and b are the two numbers.


#include <algorithm>

void stl_swap(int a, int b) {


    swap(a, b);

    cout << "swaped a : " << a << " and " << "b : " << b << endl;

}


int main() {


    int a = 5 , b = 6;

    cout << "Before swapping a = " << a << " , b = " << b << endl;

    temp_variable(a, b);

    without_temp_variable(a, b);

    stl_swap(a, b);

    return 0;
}