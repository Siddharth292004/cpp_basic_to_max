// Write a program to check whether a given character is a digit or alphabet using ASCII values.

#include <iostream>
using namespace std;

int main () {
    int ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122) {
        cout << char(ch) << " is an alphabet." << endl;
    }
    else if ( ch >= 48 && ch <=57 ) {
        cout << char(ch) << " is a digit." << endl;
    }
    else {
        cout << char(ch) << " is a special character." << endl;
    }
    return 0;
}