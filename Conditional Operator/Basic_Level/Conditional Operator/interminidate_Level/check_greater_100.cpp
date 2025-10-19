// Write a program to check whether the sum of two numbers is greater than 100.

#include <iostream>
using namespace std;

int main() {
    int num1 , num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
     
   int sum = num1 + num2;
    if (sum > 100){
        cout << "Sum of two number is greater than 100." << endl;
    }
    else{
        cout << "Sum of two number is not greater than 100. " << endl;
    }
    return 0;
}