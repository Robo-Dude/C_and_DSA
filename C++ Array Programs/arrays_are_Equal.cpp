// Given two arrays arr1[] and arr2[] of length N and M respectively, the task is to check if the two arrays are equal or not. 

// Note: Arrays are said to be equal if and only if both arrays contain the same elements and the frequencies of each element in both arrays are the same.

// Examples:

// Input: arr1[] = {1, 2, 3, 4, 5}, arr2[] = {5, 4, 3, 2, 1}
// Output : Equal
// Explanation: As both the arrays contain same elements.


// Input: arr1[] = {1, 5, 2, 7, 3, 8}, arr2[] = {8, 2, 3, 5, 7, 1}
// Output : Equal


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string check_equal(int arr1[], int arr2[], int n, int m ){

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);

    if (n != m){

        return "Not Equal";
    }

    for(int i = 0; i <= n; i++){

        if (arr1[i] != arr2[i]){

            return "Not Equal";

        }

    }

    return "Equal";

}

int main(){  

    int arr1[] = {1, 2, 3, 4, 5};

    int arr2[] = {5, 4, 3, 2, 1};

    int N = sizeof(arr1)/sizeof(arr1[0]);

    int M = sizeof(arr2)/sizeof(arr2[0]);

    cout << check_equal(arr1, arr2, N, M) << endl;

}