// Prefix Sum Array - Implementation

// Given an array arr[], Find the prefix sum of the array. A prefix sum array is another array prefixSum[] of the same size, such that prefixSum[i] is arr[0] + arr[1] + arr[2] . . . arr[i].

// Examples: 

// Input: arr[] = [10, 20, 10, 5, 15]
// Output: [10, 30, 40, 45, 60]
// Explanation: For each index i, add all the elements from 0 to i:
// prefixSum[0] = 10, 
// prefixSum[1] = 10 + 20 = 30, 
// prefixSum[2] = 10 + 20 + 10 = 40 and so on.

// Input: arr[] = [30, 10, 10, 5, 50]
// Output: [30, 40, 50, 55, 105]
// Explanation: For each index i, add all the elements from 0 to i:
// prefixSum[0] = 30, 
// prefixSum[1] = 30 + 10 = 40,
// prefixSum[2] = 30 + 10+ 10 = 50 and so on.

// Prefix Sum Implementation
// The idea is to create an array prefixSum[] of size n, and for each index i in range 1 to n - 1, set prefixSum[i] = prefixSum[i - 1] + arr[i].

#include <iostream>

using namespace std;

int main(){

    int arr[] = {10, 20, 10, 5, 15};

    int n = sizeof(arr)/sizeof(arr[0]);

    int prefix[n];

    prefix[0] = arr[0];

    for(int i = 1; i < n; i++){

        prefix[i] = prefix[i - 1] + arr[i];
    }

    for(int j = 0; j < n; j++){

        cout << prefix[j] << " ";
    }

    return 0;
}