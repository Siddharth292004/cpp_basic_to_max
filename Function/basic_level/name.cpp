#include <iostream>
using namespace std;

void NamePrint(string name){
    cout << "Hello, "<<name <<" sir";
}
int main () {
    string first_name ;
    cout << "Enter your name : ";
    cin >> first_name;
    NamePrint(first_name);
    return 0;
}