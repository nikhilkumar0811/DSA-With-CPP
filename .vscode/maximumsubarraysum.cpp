#include <iostream>
#include <vector>
#include <algorithm> // For std::max

int maxSubArray(const std::vector<int> &nums)
{
    int maxSum = nums[0];     // Initialize max sum with the first element
    int currentSum = nums[0]; // Initialize current sum with the first element

    for (size_t i = 1; i < nums.size(); ++i)
    {
        currentSum = std::max(nums[i], currentSum + nums[i]); // Extend the subarray or start new
        maxSum = std::max(maxSum, currentSum);                // Update the maximum sum
    }

    return maxSum;
}

int main()
{
    std::vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    std::cout << "Maximum Subarray Sum: " << maxSubArray(nums) << std::endl;
    return 0;
}
