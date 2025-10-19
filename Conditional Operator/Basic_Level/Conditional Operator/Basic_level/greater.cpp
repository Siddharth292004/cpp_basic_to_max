// Write a C++ program to compare two numbers and display which one is greater.

#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout << "Enter the first number:";
    cin >> num1;
    cout << "Enter the second number:";
    cin  >> num2;
    cout << (num1 > num2 ? "First number is greater" : (num1 < num2 ? "Second number is greater": "Both numbers are equal"));
    return 0;
}