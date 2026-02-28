// C++ Program To Print Hollow Star Pyramid Diamond Shape Pattern

// Here, we will build a C++ program to print the hollow star pyramid diamond shape pattern that can be achieved with two approaches i.e.

// Using  for Loop
// Using while loop
// Input:

// n = 5
// Output:

//      *
//    *  *
//   *    *
//  *      *
// *        *
//  *      *
//   *    *
//    *  *
//     *

#include <iostream>

using namespace std;

int main(){

    int n;

    cout << "Enter: ";

    cin >> n;

    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= n + i - 1; j++){

            if (j == (n - i + 1)){

                cout << "* ";
            }
            else if ( j == (n + i - 1)){

                cout << "* ";
            }
            else{

                cout << "  ";
            }
        }
        cout << endl;
    }

    for(int i = n - 1; i >= 1; i--){

        for(int j = 1; j <= n + i - 1; j++){

            if (j == (n - i + 1)){

                cout << "* ";
            }
            else if ( j == (n + i - 1)){

                cout << "* ";
            }
            else{

                cout << "  ";
            }
        }
        cout << endl;
    }
}