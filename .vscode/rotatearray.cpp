#include <iostream>
#include <vector>
using namespace std;

// Function to reverse part of the array
void reverseArray(vector<int> &arr, int start, int end)
{
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Function to rotate the array by k positions to the right
void rotateArray(vector<int> &arr, int k)
{
    int n = arr.size();
    k = k % n; // In case k is greater than the array size
    if (k == 0)
        return; // No need to rotate if k is 0

    // Reverse the entire array
    reverseArray(arr, 0, n - 1);
    // Reverse the first k elements
    reverseArray(arr, 0, k - 1);
    // Reverse the remaining n - k elements
    reverseArray(arr, k, n - 1);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    cout << "Original array: ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    rotateArray(arr, k);

    cout << "Array after rotating by " << k << " positions: ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
