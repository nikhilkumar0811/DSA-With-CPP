#include <iostream>
using namespace std;

int pivotelement(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}

int binarysearch(int arr[], int start, int end, int key)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int findPosition(int arr[], int n, int k)
{
    int pivot = pivotelement(arr, n);

    // Search in the right half
    if (k >= arr[pivot] && k <= arr[n - 1])
    {
        return binarysearch(arr, pivot, n - 1, k);
    }
    // Search in the left half
    else
    {
        return binarysearch(arr, 0, pivot - 1, k);
    }
}

int main()
{
    int arr[] = {7, 9, 1, 2, 3}; // here it will search for the key in the sorted array.
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 2;
    int position = findPosition(arr, size, key);

    if (position != -1)
    {
        cout << "Element found at index: " << position << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}
