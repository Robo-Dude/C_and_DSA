// C++ Program to Copy the Contents of One Array Into Another in the Reverse Order

// Given an array, the task is to copy these array elements into another array in reverse array.
// Examples: 

// Input: array: 1 2 3 4 5 
// Output: 5 4 3 2 1 

// Input: array: 10 20 30 40 50 
// Output: 50 40 30 20 10  
// Let len be the length of original array. We copy every element original_arr[i] to copy_arr[n-i-1] to get reverse in copy_arr[]. 

#include <iostream>

using namespace std;

int main(){

    int arr[] = {1, 2, 3, 4, 5};

    const int n = sizeof(arr)/sizeof(arr[0]);

    int copied_array[n] = {};

    for(int i = 0; i < n; i++){

        copied_array[i] = arr[n - 1 - i];
        cout << copied_array[i] << " ";
    }

    return 0;

}   