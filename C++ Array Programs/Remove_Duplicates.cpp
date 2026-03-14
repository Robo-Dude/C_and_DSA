// C++ Program To Remove Duplicates From Sorted Array

// Given a sorted array, the task is to remove the duplicate elements from the array.
// Examples:

// Input: arr[] = {2, 2, 2, 2, 2}
// Output: arr[] = {2}
//         new size = 1

// Input: arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5}
// Output: arr[] = {1, 2, 3, 4, 5}
//         new size = 5

#include <iostream>

using namespace std;

int main(){

    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};

    int i = 0;

    int n = sizeof(arr)/sizeof(arr[0]);

    for(int j = 0; j < n; j++){

        if (arr[j] != arr[j - 1]){

            arr[i] = arr[j];
            i++;
        }
    }

    for(int j = 0; j < i; j++){

        cout << arr[j] << " ";
    }

}