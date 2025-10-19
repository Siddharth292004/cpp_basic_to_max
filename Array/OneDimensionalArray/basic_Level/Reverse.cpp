#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];

    cout << "Enter the element on array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int start = 0;
    int end = size - 1;

     (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}