// C++ Program To Print Triangle Pattern

// Here we will see how to print triangle patterns using a C++ program. There are 5 patterns discussed here:

// Equilateral Triangle.
// Inverted Equilateral Triangle.
// Inverted Mirrored Right Triangle.

#include <iostream>

using namespace std;

void Inverted_Equilateral(){

    int n;

    cout << "Equilateral Triangle" << endl;

    cout << "Enter: ";

    cin >> n;

    for(int i = n; i >= 1; i--){

        for(int j = 1; j <= 5; j++){

            if ((n-i) < j ){
                cout << "* ";
            }
            else{
                cout << " ";
            }

        }
        cout << endl;
    }

}

void Equilateral(){

    int n;

    cout << "Equilateral Triangle" << endl;

    cout << "Enter: ";

    cin >> n;

    for(int i = 1; i <= 5; i++){

        for(int j = 1; j <= 5; j++){

            if ((n-i) < j ){
                cout << "* ";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }

}

void Inverted_Mirrored_Right_Triangle(){

    int n;

    cout << "Inverted_Mirrored_Right_Triangle" << endl;

    cout << "Enter: ";

    cin >> n;

    for(int i = n; i >= 1; i--){

        for(int j = 1; j <= n; j++){

            if ( (n-i) >= j ){
                cout << " ";
            }
            else{
                cout << "*";
            }

        }
        cout << endl;
    }

}

int main(){

    Inverted_Equilateral();

    cout << endl;

    Equilateral();

    cout << endl;

    Inverted_Mirrored_Right_Triangle();

    return 0;

}