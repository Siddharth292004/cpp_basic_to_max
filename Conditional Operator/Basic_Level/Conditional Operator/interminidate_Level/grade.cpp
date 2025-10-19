// Write a program to find grade of a student based on marks:

// 90–100 → A

// 80–89 → B

// 70–79 → C

// 60–69 → D

// Below 60 → Fail

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if( marks >= 90 && marks <= 100 ) {
        cout << "Grade A  " << endl;
    }
    else if ( marks >= 80 && marks < 90 ) {
        cout << "Grade B  " << endl;
    }
    else if ( marks >= 70 && marks < 80 ) {
        cout << "Grade C  " << endl;
    }
    else if ( marks >= 60 && marks < 70 ) {
        cout << "Grade D  " << endl;
    }
    else {
        cout << "Fail  " << endl;
    }
    return 0;
}