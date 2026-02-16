// write a C++ program to find the size of int, float, double, and char. It is important to know the size of different data types especially when working with large datasets to optimize memory usage.

// The size of a variable can be determined using sizeof() operator in C++. The syntax of size of operator is:

// sizeof(dataType);

// sizeof int, double, char, float
// To find the size of the four datatypes:

// The four types of variables are defined as integerType, floatType, doubleType, and charType.
// The size of the variables is calculated using the sizeof() operator.


#include <iostream>
#include <string>

using namespace std;

int main() {


    int integer_type;

    float float_type;

    char char_type;

    double double_type;

    string string_type;

    short int integer_short_type;

    long int integer_long_type;

    long long integer_long_long_type;


    cout << "Integer Type: " << sizeof(integer_type) << endl;

    cout << "Float_type: " << sizeof(float_type) << endl;

    cout << "Char_type: " << sizeof(char_type) << endl;

    cout << "Double type: " << sizeof(double_type) << endl;

    cout << "String_type: " << sizeof(string_type) << endl;

    cout << "Integer_short_type: " << sizeof(integer_short_type) << endl;

    cout << "integer_long_type: " << sizeof(integer_long_type) << endl;

    cout << "integer_long_long_type: " << sizeof(integer_long_long_type) << endl;

    return 0;

}