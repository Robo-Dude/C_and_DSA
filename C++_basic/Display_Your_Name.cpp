#include <iostream>
#include <string.h>

using namespace std;

int main() {

    string name{};

    cout << "Enter your Name ? ";

    getline(cin, name);

    cout << "Your name is " << name << "." << endl;

    return 0;
}