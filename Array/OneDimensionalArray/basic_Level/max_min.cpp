// write a program to find the maximum and minimum element in an array

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter numbre of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n ; i++){
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];

    for( int i = 1; i < n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
        else if (arr[i] < min){
            min = arr[i];
        }
    }
    cout << "The maximum element in the array is: " << max << endl;
    cout << "The minimum element in the array is: " << min << endl;
    return 0;

}