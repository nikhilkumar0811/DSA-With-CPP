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
int main()
{
    int arr[5] = {7, 9, 1, 2, 3};
    int pivot = pivotelement(arr, 5);
    cout << "The index of pivot element are:" << pivot << endl;
    cout << "The pivot element are:" << arr[pivot] << endl;
    return 0;
}