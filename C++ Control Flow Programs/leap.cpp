// C++ Program to Check Leap Year
// Last Updated : 17 Jan, 2026
// A year consisting of 366 days instead of the usual 365 days is a leap year. Every fourth year is a leap year in the Gregorian calendar system. In this article, we will learn how to write a C++ program to check leap year.

// A year is a leap year if one of the following conditions is satisfied:

// The year is a multiple of 400.
// The year is a multiple of 4 but not a multiple of 100.
// Algorithm to Check Leap Year
// First, the year is checked to see if it is divisible by 400; if yes, it is a leap year.
// If not divisible by 400, it is checked whether the year is divisible by 100; if yes, it is not a leap year.
// If not divisible by 100, the year is checked for divisibility by 4; if yes, it is a leap year.
// If none of the above conditions are satisfied, the year is not a leap year.
// Pseudo Code:

// if (year % 400 = 0)
//        return true (Leap year)

// else if (year % 100 = 0)
//         return false (Not a leap year)

// else if (year % 4 = 0)
//        return true (Leap year)

// else
//         return false (Not a leap year)

// endif

#include <iostream>

using namespace std;

bool check (int year){
    
    if (year % 400 == 0) {

        return true;

    }
    else if (year % 100 == 0) {

        return false;

    }
    else if (year % 4 == 0) {

        return true;

    }
    else {

        return false;

    }

}

int main() {

    int year;

    cout << "Enter the year: ";

    cin >> year;

    bool leap = check(year);

    if (leap == true) {

        cout << year << " is a leap year." << endl;

    }
    else{

        cout << year << " is not a leap year." << endl;

    }
    
    return 0;
}