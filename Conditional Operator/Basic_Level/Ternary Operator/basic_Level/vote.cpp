//  write a program to check if a person is eligible to vote using the ternary operator.

#include <iostream>
using namepsace std;

int main() {

    int age;
    cout << "Enter your age:";
    cin >> age;
    
    // condition ? expression1 : expression2
    string result = (age >= 18) ? "You are eligible to vote." : "You are not eligible to vote.";
    cout << result << endl;
    return 0;
}