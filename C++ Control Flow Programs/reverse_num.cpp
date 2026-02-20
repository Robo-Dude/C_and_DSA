// Reverse a Number in C++
// In this article, we will learn to write a C++ program to reverse a number. Reversing the digits of a number means changing the order of the digits of the number so that the last digit becomes the first digit, the second last digit becomes the second digit, and so on. The number upon reversing read the same as reading the original number backward.

// For example, if the number num is 12548, the reverse of the number num is 84521.

// reverse a number in C++
 
// Algorithm to Reverse Digits of a Number
// Let us assume the number to be reversed is num and the reversed number will be stored in rev_num.

// Initialize rev_num = 0.
// Run a loop till num > 0.
// The rightmost digit of num can be obtained by performing modulo by 10 (num % 10).
// Now, the rightmost digit obtained is added to the reversed number by shifting its digits one position to the left.
// rev_num = rev_num*10 + num%10;
// Remove the last digit from num by dividing it by 10 (num = num / 10).
// After the loop, return rev_num which holds the reverse of digits of the number num.

#include <iostream>

using namespace std;

int main() {

    int num, rev_num{0};

    cout << "Enter the more than 2 digit number: " ;

    cin >> num;

    while(num > 0){

        rev_num = (rev_num * 10) + num % 10;
        
        num = num / 10;

    }

    cout << "Reverse of num is :" << rev_num << endl;

    return 0;


}