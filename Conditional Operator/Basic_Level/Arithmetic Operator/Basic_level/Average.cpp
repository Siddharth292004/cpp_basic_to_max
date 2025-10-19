// Write a program to calculate the average of three numbers.

#include <iostream>
using namespace std;

int main() {

    int num1, num2 , num3;
    float average;
    cout << "ENTER THE FIRST NUMBER: ";
    cin >> num1;
    cout << "ENTER THE SECOND NUMBER:";
    cin >> num2;
    cout << "ENTER THE THIRD NUMBER: ";
    cin >> num3;
    average = (num1 + num2 + num3) / 3.0;
    cout << "THE AVERAGE OF THREE NUMBERS IS: " << average << endl;
    return 0;
}