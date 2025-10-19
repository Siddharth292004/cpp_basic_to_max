#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int arr[size];

    cout << "Enter the element on array: ";
    for (int i = 0; i < size; i++) 
    {
        cin >> arr[i];
    }
    int largest = arr[0];
    int second_largest = -999;

    for (int i = 1; i < size; i++)
    {
        if(arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if ( arr[i] > second_largest && arr[i] != largest){
            second_largest = arr[i];
        }

    }

    if (second_largest == -999){
        cout << "There is no second largest element in the array.";
    }
    else{
        cout << "The second largest element in the array is: " << second_largest;
    }
}