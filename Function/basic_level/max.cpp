#include <iostream>
using namespace std;

void max(int a,int b){
    int max = (a > b) ? a : b;
    cout << "Maximum : "<< max;
}
int main() {
    int a,b;
    cout << "Enter the first number: ";
    cin >>a;
    cout << "Enter the second number: ";
    cin >>b;

    max(a,b);
    return 0;

}