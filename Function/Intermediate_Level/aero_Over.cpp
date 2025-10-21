#include <iostream>
using namespace std;

// Function for area of circle
void area(float radius) {
    float circle = 3.14 * radius * radius;
    cout << "Area of Circle: " << circle << endl;
}

// Function for area of rectangle
void area(int length, int breadth) {
    int rectangle = length * breadth;
    cout << "Area of Rectangle: " << rectangle << endl;
}

// Function for area of triangle
void area(double base, double height) {
    double triangle = 0.5 * base * height;
    cout << "Area of Triangle: " << triangle << endl;
}

int main() {
    float radius;
    int length, breadth;
    double base, height;

    cout << "Enter the radius: ";
    cin >> radius;
    cout << "Enter the length and breadth: ";
    cin >> length >> breadth;
    cout << "Enter the base and height: ";
    cin >> base >> height;

    // Function calls
    area(radius);          // circle
    area(length, breadth); // rectangle
    area(base, height);    // triangle

    return 0;
}
