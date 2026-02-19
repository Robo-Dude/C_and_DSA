// C++ Program To Find If A Character Is Vowel Or Consonant
// Last Updated : 23 Jul, 2025
// In English Alphabet, vowels are 'a', 'e', 'i', 'o', and 'u'. The rest of the remaining characters (like 'b', 'c', 'd', 'f' ....) are consonants. In this article, we will learn to write a C++ program to check whether a character is Vowel or Consonant.

// check vowel or cosonant character in c++

// C++ Program to Check Whether a Character is a Vowel or Consonant
// In this method, we check whether the given character matches any of the 5 vowels using if-else statement. If yes, we print "Vowel", else we print "Consonant".

#include <iostream>

using namespace std;

void check(char letter){

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'|| letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {

        cout << "vowel" << endl;
    }
    else{

        cout << "Consonants" << endl;
    }
}

int main() {

    char letter;

    cout << "Enter the letter: " ;

    cin >> letter;

    check(letter);

    return 0;

}