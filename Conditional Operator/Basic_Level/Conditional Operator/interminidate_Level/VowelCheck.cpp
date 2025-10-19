#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // Using conditional operator to check if the character is a vowel
    if(( ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        string result = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                         ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
                        ? "Vowel" 
                        : "Not a Vowel";
        cout << result << endl;
    } else {
        cout << "Invalid input. Please enter an alphabetic character." << endl;
    }
}