#include <iostream>
using namespace std;

void square(int n) {
    cout << "Square : "<< n * n << endl;
}
int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;
    square(n);
    return 0;
}