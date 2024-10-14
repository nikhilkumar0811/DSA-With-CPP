#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[] = {9, 9, 9};
    int arr2[] = {1, 1, 1};
    int n = 3;
    vector<int> result;
    int carry = 0;

    for (int i = n - 1; i <= 0; i--)
    {
        int sum = arr1[i] + arr2[i], carry;
        result.push_back(sum % 10);
        carry = sum / 10;
    }
    if (carry > 0)
    {
        result.push_back(carry);
    }
    cout << "Resultant array.";
    for (int i = result.size() - 1; i >= 0; i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}