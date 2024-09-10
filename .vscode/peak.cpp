#include <iostream>
using namespace std;
int peakelement(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] < arr[mid + 1])
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
    int arr[4] = {3, 4, 5, 1};
    int peak = peakelement(arr, 4);
    cout << "the peak element index is:" << peak << endl;
    cout << "the element are:" << arr[peak] << endl;
    return 0;
}
