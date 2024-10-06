#include <iostream>
using namespace std;

bool checkSortedAndRotated(int arr[], int n)
{
    int count = 0;

    // Count the number of points where the order breaks
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            count++;
        }
    }

    // Check the transition from last element to first
    if (arr[n - 1] > arr[0])
    {
        count++;
    }

    // If the array is sorted and rotated, there should be exactly 1 break point
    return (count == 1);
}

int main()
{
    int arr[] = {3, 4, 5, 1, 2}; // Example rotated and sorted array
    int n = sizeof(arr) / sizeof(arr[0]);

    if (checkSortedAndRotated(arr, n))
    {
        cout << "The array is sorted and rotated." << endl;
    }
    else
    {
        cout << "The array is not sorted and rotated." << endl;
    }

    return 0;
}
