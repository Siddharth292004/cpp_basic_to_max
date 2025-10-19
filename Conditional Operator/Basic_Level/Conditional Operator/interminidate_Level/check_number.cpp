// Write a program to check whether a number is positive and even, positive and odd, negative, or zero.

#include <iostream>
using namespace std;

int main() { 
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n > 0 && n % 2 == 0) {
        cout << n << " is a positive even number." << endl ;
    }
    else if (n > 0 && n % 2 != 0) {
        cout << n << " is a positive odd number. " << endl;
    }
    else if (n < 0) {
        cout << n  << " is a negative number." << endl;
    }
    else {
        cout << "The number is zero." << endl;
    }
}