#include <iostream>
using namespace std;

int main()
{
    int n;

    // Prompt the user to enter the size of the array
    cout << "Enter the number of elements: ";
    cin >> n;

    // Dynamically allocate memory for an array of size n
    int *arr = new int[n];

    // Check if memory allocation was successful
    if (arr == nullptr)
    {
        cout << "Memory allocation failed!" << endl;
        return 1;
    }

    // Populate the array
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    // Display the array elements
    cout << "The elements of the array are:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free the allocated memory
    delete[] arr;
    arr = nullptr; // Prevent dangling pointer

    cout << "Memory successfully released." << endl;

    return 0;
}
