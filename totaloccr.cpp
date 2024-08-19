#include <iostream>
using namespace std;
int firstoccr(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
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
    return ans;
}
int lastoccr(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
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
    return ans;
}
int main()
{
    int arr[8] = {1, 2, 3, 3, 3, 3, 4, 5};
    int first = firstoccr(arr, 6, 3);
    cout << "the first occr are:" << first << endl;
    int last = lastoccr(arr, 6, 3);
    cout << "the last occr are:" << last << endl;
    int totaloccr = (last - first) + 1;
    cout << "the total are:" << totaloccr;
    return 0;
}