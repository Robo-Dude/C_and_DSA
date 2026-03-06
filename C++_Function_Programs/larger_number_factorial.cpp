// Given a large number N, task is to find the factorial of N using recursion.

// Factorial of a non-negative integer is the multiplication of all integers smaller than or equal to n. For example factorial of 6 is 6*5*4*3*2*1 which is 720.

// Examples:

// Input : N = 100
// Output : 933262154439441526816992388562667004-907159682643816214685929638952175999-932299156089414639761565182862536979-208272237582511852109168640000000000-00000000000000

// Input : N = 50
// Output : 3041409320171337804361260816606476884-4377641568960512000000000000

 
// Iterative Approach: The iterative approach is discussed in Set 1 of this article. Here, we have discussed the recursive approach.

// Recursive Approach: To solve this problem recursively, the algorithm changes in the way that calls the same function recursively and multiplies the result by the number n. Follow the steps below to solve the problem:

// If n is less than equal to 2, then multiply n by 1 and store the result in a vector.
// Otherwise, call the function multiply(n, factorialRecursiveAlgorithm(n - 1)) to find the answer.

// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// MUltiply the number x with the number
// represented by res array
vector<int> multiply(long int n, vector<int> digits)
{

    // Initialize carry
    long int carry = 0;

    // One by one multiply n with
    // individual digits of res[]
    for (long int i = 0; i < digits.size(); i++) {
        long int result 
          = digits[i] * n + carry;

        // Store last digit of 'prod' in res[]
        digits[i] = result % 10;

        // Put rest in carry
        carry = result / 10;
    }

    // Put carry in res and increase result size
    while (carry) {
        digits.push_back(carry % 10);
        carry = carry / 10;
    }

    return digits;
}

// Function to recursively calculate the
// factorial of a large number
vector<int> factorialRecursiveAlgorithm(
  long int n)
{
    if (n <= 2) {
        return multiply(n, { 1 });
    }

    return multiply(
      n, factorialRecursiveAlgorithm(n - 1));
}

// Driver Code
int main()
{
    long int n = 50;

    vector<int> result 
      = factorialRecursiveAlgorithm(n);

    for (long int i = result.size() - 1; i >= 0; i--) {
        cout << result[i];
    }

    cout << "\n";

    return 0;
}