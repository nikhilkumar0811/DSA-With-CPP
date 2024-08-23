#include <iostream>
using namespace std;
int binarysquare(int arr[], int n, int num)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] * arr[mid] == num)
        {
            return mid;
        }
        else if (arr[mid] * arr[mid] < num)
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
    int arr[6] = {2, 3, 4, 5, 6, 7};
    int num = 36;
    int index = binarysquare(arr, 6, num);
    cout << "the index of number are:" << index << endl;
    cout << "the squareroot of 36 is:" << arr[index] << endl;
    return 0;
}