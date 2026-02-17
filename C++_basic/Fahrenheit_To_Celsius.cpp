// C++ Program To Convert Fahrenheit To Celsius
// Last Updated : 23 Jul, 2025
// Given a Temperature n in Fahrenheit scale convert it into Celsius scale. Examples:

// Input: 32
// Output: 0

// Input: -40
// Output: -40
// Formula for converting Fahrenheit scale to Celsius scale 

// T(°C) = (T(°F) - 32) × 5/9

#include <iostream>

using namespace std;

double f_to_c(double temp_f){

    return (temp_f - 32) * 5/9;

}


int main(){

    double temp_f; 

    cout << "Enter the temperature in Fahrenheit: ";

    cin >> temp_f;

    cout << "Temperature in Celsius is : " << f_to_c(temp_f) << " C" << endl;

    return 0;
}