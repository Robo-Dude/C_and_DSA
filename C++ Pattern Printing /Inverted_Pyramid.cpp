// C++ Program To Print Inverted Pyramid

// Here we will build a C++ Program To Print Inverted Pyramid using 3 different approaches:

// Half Inverted Using "*"
// Half Inverted Using Numbers
// Full Inverted Pyramid using " * "

// 1. Half Inverted Using "*"

#include <iostream>

using namespace std;

void half_inverted_star(){

    int n;

    cout << "Enter: ";

    cin >> n;

    for(int i = n; i > 0; i--){

        for(int j = 0; j < i; j++){

            cout << "* ";
        }
        cout << endl;
    }

}

// Program to print an inverted half pyramid using numbers
// Input 

// n=4
// Output:

// 1 2 3 4
// 1 2 3
// 1 2
// 1
// By looking at the given example we can try to run the outer for loop from n to 1 and for each row traversal, we should print the elements from 1 to the row number. This means instead of printing * we need to print that specific column number.

void half_inverted_num(){

    int n;

    cout << "Enter: ";

    cin >> n;

    int num{1};

    for(int i = n; i > 0; i--){

        for(int j = 0; j < i; j++){

            cout << num << " ";
            num++;

        }
        num = 1;
        cout << endl;
    }

}

// 3. Program to print inverted full pyramid using " * "
// Input:

// n = 4
// Output:

// * * * * * * * * * 
//   * * * * * * * 
//     * * * * * 
//       * * * 
//         * 

void full_inverted_star(){

    int n;

    cout << "Enter: ";

    cin >> n;

    for( int i = 0; i <= n; i++){

        for(int j = 0; j <= (2*n) - i; j++ ){

            if (j >= i){
                cout <<"* ";
            }
            else{
                cout << "  ";
            }
        
        }

        cout << endl;

    }

}




int main(){

    half_inverted_star();

    cout << endl;

    half_inverted_num();

    cout << endl;

    full_inverted_star();

}

    
