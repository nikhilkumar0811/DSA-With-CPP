#include <bits/stdc++.h>
using namespace std;
int sum(int arr[], int target, int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "pair found:" << arr[i] << "," << arr[j] << " " << endl;
                ans++;
            }
        }
    }
    return ans;
}
int main()
{
    int arr[6] = {2, 3, 4, 7, 8, 1};
    int n = 6;
    int target = 9;
    int result = sum(arr, target, n);
    cout << " total pair of sum is:" << target << " " << "is" << " " << result;
    return 0;
}