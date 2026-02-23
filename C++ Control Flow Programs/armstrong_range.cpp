// C++ Program to Print Armstrong Numbers Between 1 to 1000

// Here, we will see how to print Armstrong numbers between 1 to 1000 using a C++ program. 

// Armstrong Number
// A number "N" is an Armstrong number if "N" is equal to the sum of all N's digits raised to the power of the number of digits in N.

// Example:

// C++ program to print armstrong numbers between 1 to 1000
 
// There are 2 ways to find all the Armstrong numbers between 1 to 1000 in C++:

// Using the Brute-force approach.
// Using the optimized solution.
// Let's start discussing each of these in detail.

// 1. Using Brute-force Approach 
// The idea is to first count the number of digits (or find order). Let the number of digits be order_n. For every digit curr in input number num, compute currorder_n. If the sum of all such values is equal to num, then return true, else false.

// Below is the C++ program to find Armstrong numbers between 1 to 1000 using a brute force approach:

#include <iostream>

using namespace std;

int count_digit(int n){

    int count{0};

    while(n > 0){

        count++;
        n = n /10;
        
    }

    return count;
}

void armstrong(int count, int n){

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

       cout << armstrong << " ";

    }
    
}


int main(){

    int start = 1, end = 1000;

    cout << "Armstrong number between 1 and 1000: " ;

    for(int i = start; i <= end; i++){

        int count = count_digit(i);

        // cout << i << " , " << count << endl;

        armstrong(count, i);

    }

    cout << endl;

}