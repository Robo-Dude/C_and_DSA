// Power Function in C

// In C language, the pow() function is defined in the <math.h> header file and is used to calculate the exponent value of x raised to the power of y, i.e., xy.
//  Basically, in C, the exponent value is calculated using the pow() function.

// pow() in C
// To use the pow() function in our program we need to include the <math.h> in our C program. The pow() function takes a double as input and returns a double as output. The pow() function has 3 different overloads that return values in double, float or long double based on the data type of input values.

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int base, exponent;

    cout << "Enter the base and exponent values: " ;

    cin >> base >> exponent;

    cout << "Result is : " << pow(base, exponent) << endl;

    return 0;
}