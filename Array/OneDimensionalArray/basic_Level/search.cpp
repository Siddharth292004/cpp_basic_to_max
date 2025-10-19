#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:" << endl;

    for( int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int target;
    cout << "Enter the element to be searched: ";
    cin  >> target;

    bool found = false;
    for( int i = 0; i < n; i++){
        if (arr[i] == target){
            cout << "Element found at index: " << i << endl;
            found = true;
            break;
        }
    }

    if (!found){
        cout << "Element not found in the array" << endl;
    }
    return 0;
}