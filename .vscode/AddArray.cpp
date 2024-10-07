#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize an array of integers
    int arr[5] = {10, 20, 30, 40, 50};

    // Get the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print all elements of the array
    cout << "Array elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Modify elements in the array
    arr[2] = 100; // Change the third element to 100

    // Print updated array elements
    cout << "Updated Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Calculate the sum of all elements
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "Sum of array elements: " << sum << endl;

    // Find the maximum element in the array
    int maxElement = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }
    cout << "Maximum element: " << maxElement << endl;

    // Find the minimum element in the array
    int minElement = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minElement)
        {
            minElement = arr[i];
        }
    }
    cout << "Minimum element: " << minElement << endl;

    return 0;
}
