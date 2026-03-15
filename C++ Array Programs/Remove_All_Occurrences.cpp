// C++ Program to Remove All Occurrences of an Element in an Array

// Here we will see how to remove all the occurrences of an element in an array using a C++ program. Below are the examples:


// Input: {1, 4, 3, 6, 8, 3, 9, 10, 3, 3, 7}
//                target=3
// Output: {1, 4, 6, 8, 9, 10, 7}

// Input: {12, 11, 10, 17, 12, 4, 7, 12} 
//             target=12
// Output: {11, 10, 17, 4, 7}


#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    int arr[] = {1, 4, 3, 6, 8, 3, 9, 10, 3, 3, 7};

    int n = sizeof(arr)/sizeof(arr[0]);

    int max_n = *max_element(arr, arr + n);

    vector<int> freq(max_n + 1, 0);

    for(int i = 0; i < n ; i++){

        freq[arr[i]]++;
    }        

    for(int i = 0; i < n; i++){

        if (freq[arr[i]] == 1){
            cout << arr[i] << " " ;
        }
    }

}