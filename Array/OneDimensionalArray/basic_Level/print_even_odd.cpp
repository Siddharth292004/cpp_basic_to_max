#include <iostream>
using namespace std;

int main(){

    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the element on array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Even elements: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0){
            cout << arr[i] << " ";

          }
    }
    cout << "\nOdd elements: ";
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 != 0){
            cout << arr[i] << " ";
        }
    }
    return 0;
}