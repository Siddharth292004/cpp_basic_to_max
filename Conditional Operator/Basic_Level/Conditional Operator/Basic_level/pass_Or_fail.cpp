// given the marks of the student .if the marks are greater than or equal to 40 then print "pass" 
// otherwise print "fail".

#include <iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enter the marks: ";
    cin >> marks;

    if(marks >= 40){
        cout << "Pass" << endl;
    }
    else{
        cout << "Fail" << endl;
    }
    return 0;
}