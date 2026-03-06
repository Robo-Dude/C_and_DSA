// Floyd’s triangle is a triangle with first natural numbers. Task is to print reverse of Floyd’s triangle.
// Examples:

// Input: 4
// Output:
// 10 9 8 7
// 6 5 4 
// 3 2 
// 1 

// Input: 5
// Output:
// 15 14 13 12 11 
// 10 9 8 7 
// 6 5 4 
// 3 2 
// 1


#include <iostream>

using namespace std;

void floyd_reverse(int n){

    int curr_value = n * (n + 1)/2;

    for(int i = n; i >= 1; i--){

        for(int j = 1; j <= i; j++){

            cout << curr_value << " ";
            curr_value --;
        }
        cout << endl;
    }

}

int main(){

    int n;

    cout << "Enter: " ;

    cin >> n;

    floyd_reverse(n);

    return 0;

}