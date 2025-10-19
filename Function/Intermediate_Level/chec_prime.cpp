#include <iostream>
using namespace std;

int main() {
    int n;
    int prime = 0;
    cout << " Enter the number: " ;
    cin >> n;
    
    for (int i = 2; i<n ; i++) {
        if(n % i == 0){
            prime = 1;
            break;
        }
    }
    if(prime){
        cout << n << " is not a prime number. " ;
    }
    else {
        cout << n << " is a prime number." ;
    }
    return 0;

}