#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // Using conditional operator to check if the character is a vowel
    string result = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                     ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
                    ? "Vowel" 
                    : "Not a Vowel";

    cout << result << endl;
    return 0;
}