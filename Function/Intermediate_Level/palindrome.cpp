#include <iostream>
using namespace std;

void check_palindrome(int n){
    int org = n;
    int reverse;
    while(n > 0) {
       int reminder = n % 10;
       reverse = reverse * 10 + reminder;
       n /= 10;
    }
    if(org == reverse){
        cout << org << " is a palindrome number";
    }
    else{
        cout << org << " is not a palindrome number";
    }
}
int main() {
    int num ;
    cout << "ENter the number: ";
    cin >> num;

    check_palindrome(num);
    return 0;
}