// C++ Program To Print Character Pattern

// Here we will build a C++ Program To Print Character patterns using 2 Approaches i.e.

// Using for loop
// Using while loop
// Printing 1 character pattern in C++ using different approaches.

// 1. Using for loop
// Input:

// rows = 5 
// Output: 

// A 
// B B 
// C C C 
// D D D D 
// E E E E E 
// Approach 1:
// Assign any character to one variable for the printing pattern. The first for loop is used to iterate the number of rows and the second for loop is used to repeat the number of columns. Then print the character based on the number of columns.


#include <iostream>

using namespace std;

int main(){

    int n;

    cout << "Enter: " ;

    cin >> n;

    char character = 'A';

    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= n; j++){

            if(i >= j){
                cout << character;
            }
            else{
                cout << " ";
            }
        }
        character++;
        cout << endl;
    }
}


