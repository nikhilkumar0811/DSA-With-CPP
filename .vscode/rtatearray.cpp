#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int nums, int k)
{
    int temp[nums];
    for (int i = 0; i < nums; i++)
    {
        temp[(i + k) % nums] = arr[i];
    }
    for (int i = 0; i < nums; i++)
    {
        arr[i] = temp[i];
    }
}
int main()
{
    int arr[] = {2, 3, 4, 5, 6};
    int nums = 5;
    int k = 2;
    rotate(arr, nums, k);

    for (int i = 0; i < nums; i++)
    {
        cout << " " << arr[i];
    }
    return 0;
}