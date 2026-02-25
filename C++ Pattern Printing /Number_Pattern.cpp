// C++ Program To Print Number Pattern

// Here, we will see a C++ program to print the 3 different number patterns. There are 3 number patterns covered using for loop and while loop with their respective explanation.
// 3 Different Number Patterns:

// 1                                               
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15         


// 1
// 2 2 
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5 


// 1
// 12
// 123
// 1234
// 12345

#include <iostream>

using namespace std;

void pattern1(){

    int n;

    cout << "Enter: ";

    cin >> n;

    int num{1};

    for(int i = 0; i < n; i++){

        for(int j = 0; j <= i; j++){

            cout << num << " " ;
            num++;

        }

        cout << endl;
    }
}

void pattern2(){

    int n;

    cout << "Enter: ";

    cin >> n;

    int num{1};

    for(int i = 0; i < n; i++){

        for(int j = 0; j <= i; j++){

            cout << num << " " ;
            

        }
        num++;

        cout << endl;
    }
}

void pattern3(){

    int n;

    cout << "Enter: ";

    cin >> n;

    int num{1};

    for(int i = 0; i < n; i++){

        for(int j = 0; j <= i; j++){

            cout << num << " " ;
            num++;
            

        }
        num = 1;

        cout << endl;
    }
}

int main(){

    pattern1();

    cout << endl;

    pattern2();

    cout << endl;

    pattern3();

    return 0;
}