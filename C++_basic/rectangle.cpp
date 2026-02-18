// C++ Program To Find Area And Perimeter Of Rectangle
// Last Updated : 23 Feb, 2023
// A rectangle is a flat figure in a plane. It has four sides and four equal angles of 90 degrees each. In a rectangle all four sides are not of equal length like squares, sides opposite to each other have equal length. Both diagonals of the rectangle have equal lengths.

// Examples:  

// Input: 4 5
// Output: Area = 20
//         Perimeter = 18

// Input: 2 3
// Output: Area = 6
//         Perimeter = 10
// Formulae :  

// Area of rectangle: a*b 
// Perimeter of rectangle: 2*(a + b) 

#include <iostream>

using namespace std;

double area(double l, double b){
    return l*b;
}

double perimeter(double l, double b){
    return 2*(l+b);
}


int main(){

    double l , b;
    
    cout << "Enter the length and breadth: " ;

    cin >> l >> b;

    cout << "Area of Rectangle : " << area(l, b) << endl;

    cout << "Perimeter of Rectangle : " << perimeter(l, b) << endl;

    return 0;

}