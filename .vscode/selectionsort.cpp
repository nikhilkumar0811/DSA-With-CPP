// when the size of array is short

#include <bits/stdc++.h>
using namespace std;
void selectionsort(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }
        swap(arr[i], arr[minindex]);
    }
}
int main()
{
    int arr[] = {64, 24, 36, 48, 11};
    int n = 5;
    selectionsort(n, arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}