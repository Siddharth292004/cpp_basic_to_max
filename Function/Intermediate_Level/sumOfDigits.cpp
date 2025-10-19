#include <iostream>
using namespace std;

void sumOfDigits(int num){
    int sum = 0;
    
    while(num > 0){
        int remainder = num % 10;
        sum +=remainder; 
        num /=10;
    }
    cout << "Sum of digits: " <<sum;
}
int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    sumOfDigits(num);
    return 0;
}