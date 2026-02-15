#include <iostream>
#include <string.h>

using namespace std;

int main() {

    int age ; 
    double height, weight; 
    string Occupation; 

    cin >> age;
    cin >> height >> weight;

    cin.ignore();

    getline(cin, Occupation);

    cout << "A " << age << " boy have a height of " << height << " and Weight of " << weight << ", work as a/an " << Occupation << endl;

    return 0;

}