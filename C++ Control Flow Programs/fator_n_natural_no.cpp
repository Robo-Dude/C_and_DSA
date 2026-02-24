// C++ Program To Find All Factors of A Natural Number

// Given a natural number n, print all distinct divisors of it.

//  all divisors of a natural number
// Examples:

//  Input : n = 10       
//  Output: 1 2 5 10

//  Input:  n = 100
//  Output: 1 2 4 5 10 20 25 50 100

//  Input:  n = 125
//  Output: 1 5 25 125
// Note that this problem is different from finding all prime factors.

// A Naive Solution would be to iterate all the numbers from 1 to n, checking if that number divides n and printing it. Below is a program for the same:

#include <iostream>

using namespace std;

void find_factor( int n ){

    for(int i = 1; i <= n; i++){

        if(n%i == 0){
            cout << i << "  " ;
        }
    }

}

int main(){

    int n;

    cout << "Enter the n natural number: ";

    cin >> n;

    find_factor(n);
}