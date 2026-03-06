// C++ Program To Print Reverse of a String Using Recursion

// Write a recursive function to print the reverse of a given string. 

#include <iostream>
#include <string>

using namespace std;

void recurive_string_reverse(string str){

    if ( str.size() == 0){

        return;

    }

    recurive_string_reverse(str.substr(1));
    cout << str[0];

}

int main(){

    string s;

    cout << "Enter: ";

    cin >> s;

    recurive_string_reverse(s);

    cout << "\n";

    return 0;
}