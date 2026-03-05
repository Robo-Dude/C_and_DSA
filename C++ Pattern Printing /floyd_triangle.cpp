// Floyd's triangle is a triangular array of natural numbers and it is named after Robert Floyd, a renowned computer scientist popularly known for the design of the Floyd–Warshall algorithm. Here, we will see how to print Floyd's pattern triangle pyramid using the C++ program. Below are the examples:

// Input: row = 5
// Output:
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 

// Input: row = 4
// Output:
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 


// Algorithm:

// At first, take the number of rows as input.
// The next step is to implement the nested loop to print this pattern.
// A variable name count maintains the value of natural numbers to be printed.  
// There are 3 ways to print Floyd's pattern triangle pyramid:

// using for loop.
// Using While loop.
// Using Recursion.


#include <iostream>

using namespace std;

void using_for_loop(){

    int n;

    cout << "Enter: " ;

    cin >> n;

    int count = 1;

    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= i; j++){

            cout << count << " " ;
            count++;

        }
        cout << endl;
    }

}

void using_while_loop(){

    int n;

    cout << "Enter: " ;

    cin >> n;

    int count = 1;
    int i = 1;
    int j = 1;

    while(i <= n){

        while(j <= i){

            cout << count << " ";
            count++;
            j = j + 1;

        }
        j = 1; 
        i++;

        cout << endl;
    }

}

void recursive_floyd(int r, int cr, int count){

    int j = 1;

    while(j <= cr){

        cout << count << " ";
        count++;
        j++;

    }
    cout << endl;

    if (r == 1){

        return;
    }

    recursive_floyd(r - 1, cr + 1, count);

}

void using_recursive(){

    int n;

    cout << "Enter: " ;

    cin >> n;

    int limit = 1;

    recursive_floyd(n, 1, 1);

}

int main(){


    using_for_loop();

    cout << endl;

    using_while_loop();

    cout << endl;

    using_recursive();

    return 0;
}