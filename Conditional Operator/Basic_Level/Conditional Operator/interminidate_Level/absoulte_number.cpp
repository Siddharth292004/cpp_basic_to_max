// Write a program to find absolute value of a number without using built-in functions.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if ( n < 0 ) {
        n = -n;
    }
    cout << "Absolute value is: " << n << endl;
    return 0;
}