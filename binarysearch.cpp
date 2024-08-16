#include <iostream>
using namespace std;
int binarysearch(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2; //(start + end) / 2;
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
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int index = binarysearch(arr, 6, 4);
    cout << "the index of key is:" << index << endl;
    return 0;
}