#include <iostream>
using namespace std;

void reverse(int num){
    int reverse = 0;
    while(num > 0){
        int remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /=10;

    }
    cout << "reverse of number: " << reverse;
}
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    reverse(n);
}