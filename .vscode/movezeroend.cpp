#include <bits/stdc++.h>
using namespace std;
void movetoend(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}
int main()
{
    int arr[] = {0, 2, 3, 0, 1};
    int n = 5;
    movetoend(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}