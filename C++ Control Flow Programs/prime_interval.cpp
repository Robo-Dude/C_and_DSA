// C++ Program To Find Prime Numbers Between Given Interval

// A prime number is defined as a natural number greater than 1 and is divisible by only 1 and itself. In other words, the prime number is a positive integer greater than 1 that has exactly two factors, 1 and the number itself. The first few prime numbers are 2, 3, 5, 7, 11, 13, 17, 19, 23 . . .

// Note: 1 is not either prime or composite. The remaining numbers, except for 1, are classified as prime and composite numbers. 

// Find Prime Numbers Between Given Interval

// Given two numbers a and b as interval range, the task is to find the prime numbers in between this interval.

// Examples: 

// Input: a = 1, b = 10
// Output: 2, 3, 5, 7
// Input: a = 10, b = 20
// Output: 11, 13, 17, 19


#include <iostream>

using namespace std;

int main(){

    int a, b, flag{0};

    cout << "Enter the number a and b :";

    cin >> a >> b;

    for( int i = a+1; i < b; i++ ){

        for(int j = 2; j < i; j++){

            if (i % j == 0 ){
                flag = 1;
            }

        }
        if (flag == 0){
            cout << i << " ";
        }
        else{
            flag = 0;
        }
    }

    return 0;
}