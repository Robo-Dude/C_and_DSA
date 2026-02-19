// C++ Program To Find Sum of First N Natural Numbers
// Last Updated : 16 Jan, 2026
// Natural numbers are those positive whole numbers starting from 1 (1, 2, 3, 4, ...). In this article, we will learn to write a C++ program to calculate the sum of the first N natural numbers.

// For example:

// Input: 6

// Output: 21

// Explanation: 1+2+3+4+5+6 = 21

// Algorithm
// 1. Initialize a variable sum = 0.
// 2. Run a loop from i = 1 to n.
// 3. Inside the loop, add the value of i to the current value of sum for each iteration i.e. (sum = sum + i).
// 4. After the loop, the variable sum will hold the sum of the first n natural numbers.

#include <iostream>

using namespace std;

int sum(int num){

    int sum{0};

    while(num >= 1){

        sum = sum + num;

        num--;

    }

    return sum;
}

int main() {

    int num;

    cout << "Enter the number: " ;

    cin >> num;

    cout << "Sum of " << num << " natural numbers are: " << sum(num) << endl;

}