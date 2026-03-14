// How to Find Common Elements Between Two Arrays using STL in C++?

// Given two arrays, the task is to find all the elements that are present in both the arrays i.e. common elements between both arrays in C++.

// Example:

// Input: arr1[] = {1, 45, 54, 71, 76, 12}
//            arr2[] = {1, 7, 5, 4, 6, 12}
// Output: 1 12
// Explanation: The common elements between the two arrays are 1 and 12.

// Input: arr1[] = {1, 7, 5, 4, 6, 12}
//            arr2[] = {10, 12, 11}
// Output: 12
// Explanation: The only common element between the two arrays is 12.

// Using std::set_intersection()
// C++ STL provides the std::set_intersection() function that is used to find the common elements (also called intersection) of the two given ranges. But the prerequisite for this function is that both the ranges should be sorted.

// Syntax of std::set_intersection()
// std::set_intersection(first1, last1, first2, last2, dest);

#include <iostream>
#include <algorithm> 
#include <vector>

using namespace std;

int main(){

    int arr1[] = {1, 45, 54, 71, 76, 12};

    int arr2[] = {1, 7, 5, 4, 6, 12};

    int n1 = sizeof(arr1)/sizeof(arr1[0]);

    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    vector<int> v;

    sort(arr1, arr1 + n1);

    sort(arr2, arr2 + n2);

    set_intersection(arr1, arr1 + n1, arr2, arr2 + n2,  back_inserter(v));

    for(int i : v){

        cout << i << " ";
    }
    

}