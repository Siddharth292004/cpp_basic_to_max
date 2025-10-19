// write a program to check whether a number is even or odd using ternary operator.

#include<iostream>
#include <string>
using namespace std;

int main(){
    int number;
    cout << "Enter a number:";
    cin >> number;
    string result = (number % 2 == 0) ? "Even" : "Odd";
    cout << number << " is an " << result << " number." << endl;
    return 0;
}