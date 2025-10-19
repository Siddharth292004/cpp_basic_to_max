#include <iostream>
using namespace std;

int main() {
    int a, b; 
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    if(a ==b) {
        cout << "Both number are equal." << endl;
    }
    else {
        cout << "Both number are not equal." << endl;
    }
    return 0;
}