// C++ Program to Left Rotate an Array by d Elements.

// Given an array of integers arr[] of size N and an integer, the task is to rotate the array elements to the left by d positions.

// Examples:  
// Input: 
// arr[] = {1, 2, 3, 4, 5, 6, 7}, d = 2
// Output: 3 4 5 6 7 1 2

// Input: arr[] = {3, 4, 5, 6, 7, 1, 2}, d=2
// Output: 5 6 7 1 2 3 4

#include <iostream>

using namespace std;

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int d;
    const int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Rotate the array elements to the left by d positions" << endl;

    cout << "Enter the d : " ;

    cin >> d;

    int temp[n] = {};

    for(int i = d; i < n; i++){

        temp[i - d] = arr[i];
        // cout << arr[i] << " ";

    }

   for(int j = 0; j < 2; j++){

        temp[n - d + j] = arr[j];
        // cout << arr[j] << " ";

   }

    for(int j = 0; j < n; j++){

        cout << temp[j] << " ";

   }

    return 0;
}
