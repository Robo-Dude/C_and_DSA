// C++ Program To Print Left Half Pyramid Pattern

// Here, we will build a C++ program to print the left half of pyramid pattern using 2 approaches i.e.

// Using for loop
// Using while loop
// 1. Using for loop
// Input: 

// rows = 5
// Output:

//     *
//    **
//   ***
//  ****
// ***** 
// First, for loop is used to identify the number of rows and the second for loop is used to identify the number of columns. Here the values will be changed according to the first for loop.  If j is greater than i then it will print the output otherwise print the space.


#include <iostream>

using namespace std;

void for_loop(){

    int n;

    cout << "Enter the Rows: ";

    cin >> n;

    for(int i = 0; i < n; i++){

        for (int j = 0; j < n; j++)
        {
            if (j >= n - 1 - i){
                cout << "* ";
            }   
            else{
                cout << "  ";
            }
        }
        cout << endl;

    }

}

int main(){

    for_loop();

    return 0;
}

