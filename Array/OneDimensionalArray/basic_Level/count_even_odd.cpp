#include <iostream>
using namespace std;

int main() {
    int n;
    int even_count = 0, odd_count = 0;
    cout << "Enter number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n  << " elements:" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for( int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            even_count++;      
        }
        else{
            odd_count++;
        }
    }
    cout << "Total even numbers: " << even_count << endl;
    cout << "Total odd numbers: " << odd_count << endl;
}