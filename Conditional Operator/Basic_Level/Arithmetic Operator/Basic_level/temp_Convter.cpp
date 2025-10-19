// Write a program to convert temperature from Celsius to Fahrenheit (F = (C * 9/5) + 32).

#include <iostream>
using namespace std;
int main() {

    float celsius, fahrenheit;
    cout << "ENTER TEMPERATURE IN CELSIUS: ";
    cin >> celsius;
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    cout << "TEMPERATURE IN FAHRENHEIT IS: " << fahrenheit << endl;
    return 0;
}