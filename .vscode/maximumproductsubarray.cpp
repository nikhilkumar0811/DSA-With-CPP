#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> &nums)
{
    if (nums.empty())
        return 0;

    int maxProduct = nums[0]; // Tracks the global maximum product
    int currMax = nums[0];    // Tracks the maximum product including the current element
    int currMin = nums[0];    // Tracks the minimum product including the current element

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] < 0)
        {
            swap(currMax, currMin); // Swap because multiplying by a negative reverses the max/min
        }

        // Update currMax and currMin for the current element
        currMax = max(nums[i], currMax * nums[i]);
        currMin = min(nums[i], currMin * nums[i]);

        // Update the global maximum product
        maxProduct = max(maxProduct, currMax);
    }

    return maxProduct;
}

int main()
{
    vector<int> nums = {2, 3, -2, 4}; // Example input
    int result = maxProduct(nums);
    cout << "The maximum product of a subarray is: " << result << endl;
    return 0;
}
