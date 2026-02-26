// C++ Program To Print Continuous Character Pattern

// Here we will build a C++ Program To Print Continuous Character patterns using 2 different methods i.e: 

// Using for loops
// Using while loops
// Input:

// rows = 5
// Output:  

// A 
// B C 
// D E F 
// G H I J 
// K L M N O 
// 1. Using for loop
// Approach 1:   
// Assign any character to one variable for the printing pattern. The first for loop is used to iterate the number of rows and the second for loop is used to repeat the number of columns. Then print the character based on the number of columns and increment the character value at each column to print a continuous character pattern.


#include <iostream>

using namespace std;

int main(){

    int n;

    cout << "Enter: ";

    cin >> n;

    char character = 'A';

    for(int i = 1; i <= n; i++){

        for(int j = 1; j <=n; j++){

            if (i >= j) {
                cout << character;
                character++;
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}