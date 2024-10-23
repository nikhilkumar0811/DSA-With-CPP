#include <bits/stdc++.h>
using namespace std;
int binarysearch(int mid, int key, int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return -1;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int key = 3;
}