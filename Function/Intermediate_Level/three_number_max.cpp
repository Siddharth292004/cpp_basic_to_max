#include <iostream>
using namespace std;

void max (int a,int b,int c) {
  int largest;
  
  if (a > b && a > c) {
    largest = c;
  }
  else if (b > a && b > c) {
    largest = b;
  }
  else {
    largest = c;
  }

  cout << largest << " is maximum among them " << endl;

}

int main() {
    int a,b,c;
    cout << "Enter first number: " ;
    cin>> a;
    cout << "Enter secon number: " ;
    cin >> b;
    cout << "Enter the thrid number: ";
    cin >> c;

    max(a,b,c);
    return 0;
}