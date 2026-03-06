// A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself. For example, 2, 3, 5, 7, and 11 are prime numbers. In this article, we will learn how to find all the prime numbers between the given range.

// Example

// Input: l = 10, r = 30
// Output: 11 13 17 19
// Explanation: The prime numbers between 10 and 20 are 11, 13, 17, and 19.

// Input: l = 1, r = 10
// Output: 2 3 5 7
// Explanation: The prime numbers between 1 and 10 are 2, 3, 5, and 7.


#include <iostream>

using namespace std;

int check_prime(int n){

    for(int i = 2; i < n; i++){

        if(n % i == 0){

            return 0;
        }

    }

    return 1;

}

void prime_interval(int l, int r){

    for(int i = l; i <= r; i++){

        if (check_prime(i) == 1){

            cout << i << " ";
        }
    }

}

int main(){

    int l, r;

    cout << "Enter : ";

    cin >> l >> r;

    prime_interval(l, r);

    cout << endl;

}