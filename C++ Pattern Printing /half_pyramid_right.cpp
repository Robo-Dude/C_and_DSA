// C++ Program To Print Right Half Pyramid Pattern

// Here we will build a C++ Program To Print Right Half Pyramid Pattern with the following 2 approaches:

// Using for loop 
// Using while loop
// Input:

// rows = 5 
// Output: 

// * 
// * * 
// * * * 
// * * * * 
// * * * * *  
// 1. Using for loop
// First for loop is used to identify the number of rows and the second for loop is used to identify the number of columns. Here the values will be changed according to the first for loop. 


#include <iostream>

using namespace std;

void for_loop(){

    int n;

    cout << "Enter the rows: ";

    cin >> n;

    cout << "Right Half Pyramid using for loop: " << endl;

    for(int i = 0; i < n; i++){

        for(int j = 0; j <= i; j++){

            cout << "* ";
        }

        cout << endl;
    }

}


// 2. Using while loop
// The while loops check the condition until the condition is false. If condition is true then enters in to loop and execute the statements. 


void while_loop(){

    int n, i{0};

    cout << "Enter the rows: ";

    cin >> n;

    cout << "Right Half Pyramid using while loop: " << endl;

    while(i < n){

        int j{0};

        while(j <= i){

            cout << "* ";
            j++;
        }

        cout << endl;

        i++;
    }

}


int main(){

    for_loop();

    cout << endl;

    while_loop();

}