// Given an array, the task is to find the average of that array. Average is the sum of the array elements divided by the number of elements.

// Examples:

// Input: arr[] = {1, 2, 3, 4, 5}
// Output: 3
// Sum of the elements is 1+2+3+4+5 = 15 
// and total number of elements is 5.
// So average is 15/5 = 3


// Input: arr[] = {5, 3, 6, 7, 5, 3}
// Output: 4.83333
// Sum of the elements is 5+3+6+7+5+3 = 29
// and total number of elements is 6.
// So average is 29/6 = 4.83333.


// 1. Iterative Approach
// The iterative program is easy. We need to find the sum and divide the sum by the total number of elements.

#include <iostream>

using namespace std;

double Average_of_array(int arr[], int n){

    int sum = 0;

    for(int i = 0; i < n; i++){

        sum += arr[i];
    }

    cout << sum << endl;

    return (double)sum/n;

}

// 2. Recursive Approach
// The idea is to pass the index of the element as an additional parameter and recursively compute the sum. After computing the sum, divide the sum by n.

// Approach
// We will call the function again and again till we reach the end of an array.
// We will sum every element of the array and when we reach the end of an array, we will return the average of the array.

double Average_of_array_recursive(int arr[], int n, int rp, int sum){

    sum += arr[rp];

    rp++;

    if (rp == n){
        return (double)sum/n;
    }

    return(Average_of_array_recursive(arr , n, rp, sum));

}

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6};

    size_t n = sizeof(arr)/sizeof(arr[0]);

    cout << n << endl;

    cout << "Average of the array: " << Average_of_array(arr , n) << endl;

    int rp = 0; int sum = 0;

    cout << "Average of the array: " << Average_of_array_recursive(arr , n, rp, sum) << endl;

    return 0;

}