#include <iostream>
using namespace std;

int twosum(int arr[], int target, int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "Pair found: (" << arr[i] << ", " << arr[j] << ")" << endl;
                ans++;
            }
        }
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    int target = 9;
    int sum = twosum(arr, target, n);
    cout << "Number of pairs that sum to " << target << " is: " << sum << endl;
    return 0;
}
