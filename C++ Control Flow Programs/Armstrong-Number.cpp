// C++ Program To Check Armstrong Number
// Last Updated : 23 Jul, 2025
// Given a number x, determine whether the given number is Armstrong's number or not. A positive integer of n digits is called an Armstrong number of order n (order is a number of digits) if:

// abcd... = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + .... 
// Examples: 

// Input: 153
// Output: Yes
//               153 is an Armstrong number.
//               1*1*1 + 5*5*5 + 3*3*3 = 153

// Input: 120
// Output: No
//              120 is not a Armstrong number.
//              1*1*1 + 2*2*2 + 0*0*0 = 9

// Input: 1253
// Output: No
//              1253 is not a Armstrong Number
//              1*1*1*1 + 2*2*2*2 + 5*5*5*5 + 3*3*3*3 = 723

// Input: 1634
// Output: Yes
//               1*1*1*1 + 6*6*6*6 + 3*3*3*3 + 4*4*4*4 = 1634

// Methods to Check Armstrong Number
// There are certain methods to check if a number is mentioned below:

// 1. Simple Approach
// The idea is to first count the number of digits (or find the order). Let the number of digits be n. For every digit r in input number x, compute rn. If the sum of all such values is equal to n, then return true, else false. 

// Below is the C++ program to implement the above approach:

#include <iostream>
#include <string>

using namespace std;

int count_digit(int n){

    int count{0};

    while(n >= 1){

        // cout << n % 10;

        if (n % 10 != 0)
        {
            count++;
            n = n /10;
        }
        
    }

    return count;
}

string Armstrong(int count, int n){

    int armstrong{0};
    int ncopy = n;

    while(n >= 1){

        int element = n % 10;

        int product{1};

        for(int i = 0; i < count; i++){

            product = product * element;    
            // cout << product << endl;       

        }

        // cout << "final" << product << endl;

        armstrong = armstrong + product;

        // cout << "armstrong : " << armstrong << endl;

        product = 0;
        n = n/ 10;
    }

    if (ncopy == armstrong){

        return "yes";

    }
    else{

        return "no";
    }

    
}

int main() {


    int n; 

    cout << "Enter the number: ";

    cin >> n;

    int count = count_digit(n);

    // cout << count << endl;

    cout << Armstrong(count, n) << endl; 

    return 0;


}