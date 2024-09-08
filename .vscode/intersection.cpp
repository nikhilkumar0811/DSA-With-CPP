#include <iostream>
using namespace std;
int intersecting(int arr1[], int arr2[], int n, int m)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int element = arr1[i];
        for (int j = 0; j < m; j++)
        {
            if (element == arr2[j])
            {
                cout << element << endl;
                ans++;
                break;
            }
        }
    }
    return ans;
}
int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 2};
    int n = 5;
    int m = 4;
    int section = intersecting(arr1, arr2, n, m);
    cout << "the intersecting element are:" << section << endl;
    return 0;
}