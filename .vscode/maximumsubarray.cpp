#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int maxSum = nums[0];     // Initialize maxSum with the first element
    int currentSum = nums[0]; // Tracks the sum of the current subarray

    for (int i = 1; i < nums.size(); i++)
    {
        // Update the currentSum: Either include the current element or start a new subarray
        currentSum = max(nums[i], currentSum + nums[i]);

        // Update the maxSum if currentSum is greater
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum Subarray Sum: " << maxSubArray(nums) << endl;
    return 0;
}
