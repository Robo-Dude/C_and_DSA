// C++ Program to Find the Minimum and Maximum Element of an Array

#include <iostream>
using namespace std;

int find_max_number(int arr[], int n){

    int max_value = arr[0];

    for(int i = 1; i < n; i++){

        if (arr[i] > max_value){

            max_value = arr[i];
        }
    }

    return max_value;
}


int find_min_number(int arr[], int n){

    int min_value = arr[0];

    for(int i = 1; i < n; i++){

        if (arr[i] < min_value){

            min_value = arr[i];
        }
    }

    return min_value;
}

int main(){

    int arr[] = {1,4,5,7,5,6,7,9,2,4};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Maximuim number in array is: " << find_max_number(arr, n) << endl;

    cout << "Minimuim number in array is: " << find_min_number(arr, n) << endl;

    return 0;
}