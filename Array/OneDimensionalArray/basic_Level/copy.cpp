#include <iostream>
using namespace std;

int main () {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr1[size], arr2[size];
    cout << "Enter elements of array: ";
    for(int i = 0; i < size; i++) {
        cin >> arr1[i];
    }
    for(int i = 0; i < size; i++) {
        arr2[i] = arr1[i];
    }
     cout << "Element of first array: ";
    for(int i = 0; i < size; i++) {
        cout << arr1[i] << " ";
    }
    cout << "\nElement of second array: ";
    for(int i = 0; i < size; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}