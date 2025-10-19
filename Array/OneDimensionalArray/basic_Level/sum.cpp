// write a prgram to find the sum of elements of an array

#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cout << "Enter number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0; i < n; i ++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }

    cout << "The sum of elements in the array is: " << sum << endl;
    return 0;
    
}