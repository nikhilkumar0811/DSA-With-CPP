#include <iostream>
#include <algorithm>
using namespace std;
int pairsum(int arr[], int size, int sum_value)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == sum_value)
            {
                int first = min(arr[i], arr[j]);
                int second = max(arr[i], arr[j]);
                cout << first << second << endl;
                ans++;
            }
        }
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int sum_value = 5;
    int size = 5;
    int sum = pairsum(arr, size, sum_value);
    cout << "Number of sum are:" << sum << endl;
    return 0;
}