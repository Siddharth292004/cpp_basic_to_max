// Write a program to check whether a number is divisible by 2 and 3 both.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n % 2 == 0 && n % 3 == 0) {
        cout << n << " is divisible by both 2 and 3." << endl;
    }
    else {
        cout << n << " is not divisible by both 2 and 3." << endl;
    }
    return 0;
}