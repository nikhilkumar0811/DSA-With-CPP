#include <bits/stdc++.h>
using namespace std;

vector<int> maxSumOfThreeSubarrays(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> sum(n + 1, 0);               // Prefix sum array
    vector<int> left(n, 0), right(n, n - k); // Best indices for left and right subarrays

    // Compute prefix sums
    for (int i = 0; i < n; i++)
    {
        sum[i + 1] = sum[i] + nums[i];
    }

    // Compute the best left subarray indices
    for (int i = k, maxSum = sum[k] - sum[0]; i < n; i++)
    {
        if (sum[i + 1] - sum[i + 1 - k] > maxSum)
        {
            maxSum = sum[i + 1] - sum[i + 1 - k];
            left[i] = i + 1 - k;
        }
        else
        {
            left[i] = left[i - 1];
        }
    }

    // Compute the best right subarray indices
    for (int i = n - k - 1, maxSum = sum[n] - sum[n - k]; i >= 0; i--)
    {
        if (sum[i + k] - sum[i] >= maxSum)
        {
            maxSum = sum[i + k] - sum[i];
            right[i] = i;
        }
        else
        {
            right[i] = right[i + 1];
        }
    }

    // Find the maximum sum by iterating through the middle subarray
    vector<int> result(3, 0);
    int maxSum = 0;
    for (int i = k; i <= n - 2 * k; i++)
    {
        int l = left[i - 1], r = right[i + k];
        int currentSum = (sum[l + k] - sum[l]) + (sum[i + k] - sum[i]) + (sum[r + k] - sum[r]);
        if (currentSum > maxSum)
        {
            maxSum = currentSum;
            result = {l, i, r};
        }
    }

    return result;
}

int main()
{
    vector<int> nums = {1, 2, 1, 2, 6, 7, 5, 1};
    int k = 2;
    vector<int> result = maxSumOfThreeSubarrays(nums, k);
    cout << "Indices of the maximum sum subarrays: ";
    for (int index : result)
    {
        cout << index << " ";
    }
    cout << endl;
    return 0;
}
