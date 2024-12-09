#include <bits/stdc++.h>
using namespace std;
int majority(int n, int arr[])
{
    int cnt = 0, candidate = 0;
    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
        {
            candidate = arr[i];
        }
        if (arr[i] == candidate)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
    return candidate;
}
int main()
{
    int arr[] = {1, 2, 3, 3, 3, 4, 5, 5, 5};
    int n = 9;
    int result = majority(n, arr);
    cout << "The majority element is:" << result << endl;
    return 0;
}