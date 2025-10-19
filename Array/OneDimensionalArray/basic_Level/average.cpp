#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size  of array: ";
    cin >> size;
    
    int arr[size];
    int sum = 0;
    float average;

    cout << "Enter the element on array: ";
    for (int i = 0; i < size; i++) 
    {
        cin >> arr[i];
        sum += arr[i];
    }
    average = float(sum) /size;
    cout << "Average of array is: " << average;
    return 0;

}