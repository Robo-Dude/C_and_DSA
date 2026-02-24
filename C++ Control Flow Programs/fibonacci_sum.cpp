// C++ Program To Find Sum of Fibonacci Numbers at Even Indexes Upto N Terms
// Last Updated : 23 Jul, 2025
// Given a positive integer N, the task is to find the value of F2 + F4 + F6 +.........+ F2n upto N terms where Fi denotes the i-th Fibonacci number.
// The Fibonacci numbers are the numbers in the following integer sequence.

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ......

// Examples: 
 
// Input: n = 5 
// Output: 88 
// N = 5, So the fibonacci series will be generated from 0th term upto 10th term: 
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55 
// Sum of elements at even indexes = 0 + 1 + 3 + 8 + 21 + 55
// Input: n = 8 
// Output: 1596 
// 0 + 1 + 3 + 8 + 21 + 55 + 144 + 377 + 987 = 1596.


#include <iostream>

using namespace std;

int sum_fibonacci_number(int n){

    int a{0}, b{1}, i{2}, j{1};

    if (n == 0){

        return 0;

    }else if (n == 1){

        return 1;

    }

    int sum{0};

    while (j <= n)
    {
        int next = a + b;
        a = b;
        b = next;
        // cout << i%2 << endl;
       
        if (i%2 == 0){
            
            sum = sum + next;
            
            j++;
        }

        i++;
    }

    return sum;
}

int main(){

    int n;
    
    cout << "Enter the index: ";

    cin >> n;

    cout << "Sum of fibonacci number till index 5: " << sum_fibonacci_number(n) << endl;

    return 0;

}