// C++ Program to Check Whether a Number is Palindrome or Not

// A palindrome number is a number that remains the same even if its digits are reversed. In this article, we will learn how to check a given number is a palindrome or not in C++.

// The easiest way to check if a number is a palindrome is to simply reverse the original number, then check if both numbers are equal. Let's take an example:

#include <iostream>

#include <string>

using namespace std;

int reverse(int num){

    int rev;

    while (num > 1){

        rev = rev * 10 + num % 10 ;

        num = num /10;

    }

    return rev;

}


// Using Two Pointers After String Conversion
// In two-pointer technique, first convert the number into a string using to_string() function and then take two pointers: one pointing at the start of the string and the other at the end of the string. Compare the characters they point to while moving these pointers towards each other. If all the characters match by the time pointers meets, the number is a palindrome, otherwise it is not.


void reverse_string(string c){


    string rev_string;

    int l = 0;

    int r = c.size() -1;

    while (l < r){

        if (c[l] != c[r]){
            cout << "Not a Palindrome" << endl;
            return;
        }

        l++, r--;
    }

    cout << "Palindrome" << endl;

}


int main(){


    int num, rev{0};

    cout << "Enter the number: " ;

    cin >> num;

    rev = reverse(num);

    reverse_string(to_string(num));

    if (rev == num){

        cout << "Palindrome" << endl;
    }
    else{

        cout << "Not palindrome" << endl;
    }

}