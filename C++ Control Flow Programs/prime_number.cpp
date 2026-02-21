// A Prime Number is a natural number greater than 1 that has no positive divisors other than 1 and itself.

// Examples:

// Input: n = 29
// Output: 29 is prime
// Explanation: 29 has no divisors other than 1 and 29 itself. Hence, it is a prime number.

// Input: n = 15
// Output: 15 is NOT prime
// Explanation: 15 has divisors other than 1 and 15 (i.e., 3 and 5). Hence, it is not a prime number.

// There are many approaches for checking whether the given number is a prime number:

#include <iostream>

using namespace std;

int main(){

    int n;

    cout << "Enter the number: ";
    
    cin >> n;

    for(int i = 2; i < n; i++){

        if (n % i == 0){
            cout << n << " is not prime number."<< endl;

            return 0;
        }
        
    }
    cout << n << " is a prime number." << endl;

    return 0;

}
