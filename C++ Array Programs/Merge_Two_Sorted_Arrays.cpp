// C++ Program to Merge Two Sorted Arrays
// Last Updated : 23 Jul, 2025
// Given two sorted arrays, the task is to merge them in a sorted manner.
// Examples: 

// Input: arr1[] = { 1, 3, 4, 5}, arr2[] = {2, 4, 6, 8} 
// Output: arr3[] = {1, 2, 3, 4, 4, 5, 6, 8}


// Input: arr1[] = { 5, 8, 9}, arr2[] = {4, 7, 8} 
// Output: arr3[] = {4, 5, 7, 8, 8, 9} 

// Naive Approach:

// It is the brute force method to do the same. Take all the elements of arr1 and arr2 in arr3. Then simply sort the arr3.

#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int arr1[] = {1, 3, 5, 7};
    
    int arr2[] = {2, 4, 6, 8};

    int arr3[] = {};

    int n1 = sizeof(arr1)/sizeof(arr1[0]);

    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    int n = n1 + n2;

    for(int i = 0; i < n1; i++){

        arr3[i] = arr1[i];
    }

    for(int j = 0; j < n2; j++){

        arr3[j + n1] = arr2[j];
    }

    // for( int k = 0 ; k < n1 + n2; k++){

    //     cout << arr3[k] << " ";
    // }

    cout << endl;

    sort(arr3, arr3 + n);

    for( int k = 0 ; k < n1 + n2; k++){

        cout << arr3[k] << " ";
    }

    cout << endl;

    return 0;

}