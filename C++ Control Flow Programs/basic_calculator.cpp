// C++ Program to Make a Simple Calculator
// Last Updated : 16 Jan, 2026
// A simple calculator is a device used to perform basic arithmetic operations such as addition, subtraction, multiplication, and division. It makes arithmetic calculations easier and faster. In this article, we will learn how to code a simple calculator using C++.

// Examples

// Input: Enter an operator (+, -, *, /): *
//             Enter two numbers: 10 5
// Output: Result: 50
// Explanation: Chosen operation is multiplication, so 10 * 5 = 50

// There are two different ways to make simple calculator program in C++:

// 1. Using Switch Statement
// In C++, the switch statement allows us to define different cases that will be executed based on the value of a given variable. We can use it to define four cases for addition, subtraction, multiplication, and division which will be executed based on the value that user input to select the operation type.

#include <iostream>

using namespace std;

int main(){

    int option{0}, a, b;

    cout << "Basoc calculator!!";

    cout << "Choose any operation given below : " << endl;

    cout << "1. Addition +" << endl;

    cout << "2. Substraction -" << endl;

    cout << "3. Multiplication *" << endl;

    cout << "4. Division /" << endl;

    cout << "Enter the index value of operation: ";

    cin >> option;

    cout << "Enter any two number: " ;

    cin >> a >> b;

    switch (option)
    {
    case 1:
        
        cout << "Addition of " << a << " and " << b << " is : " << a+b << endl;

        break;

    case 2:
        
        cout << "Substraction of " << a << " and " << b << " is : " << a-b << endl;

        break;

    case 3:
        
        cout << "Multiplication of " << a << " and " << b << " is : " << a*b << endl;

        break;

    case 4:
    
        cout << "Division of " << a << " and " << b << " is : " << a/b << endl;

        break;
    
    default:
        cout << "Operator not found!!";
        break;
    }


}