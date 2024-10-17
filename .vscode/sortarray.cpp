#include <bits/stdc++.h>
using namespace std;

void sortarr(int arr[], int n)
{
    int i = 0;     // Left pointer
    int j = 0;     // Middle pointer
    int k = n - 1; // Right pointer

    while (j <= k)
    {
        if (arr[j] == 0)
        {
            // Move all 0's to the beginning
            swap(arr[i], arr[j]);
            i++;
            j++; // Move both i and j pointers forward
        }
        else if (arr[j] == 3 || arr[j] == 4)
        {
            // Move larger elements (3, 4 in this case) to the end
            swap(arr[j], arr[k]);
            k--; // Move k pointer backward
        }
        else
        {
            // Move j pointer forward if the element is in the correct place (like 1, 2)
            j++;
        }
    }
}

int main()
{
    int arr[] = {0, 1, 0, 3, 2, 4};
    int n = 6;

    // Call the function to rearrange the array
    sortarr(arr, n);

    // Output the rearranged array
    cout << "Rearranged array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
