#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int numWaysToSplitArray(vector<int> &nums)
{
    int totalSum = accumulate(nums.begin(), nums.end(), 0);

    if (totalSum % 2 != 0)
    {
        return 0; // If the total sum is odd, we can't split it into two equal parts.
    }

    int target = totalSum / 2;
    int currentSum = 0;
    int count = 0;

    // Traverse the array and keep a running sum
    for (int i = 0; i < nums.size() - 1; i++)
    {
        currentSum += nums[i];
        if (currentSum == target)
        {
            count++; // If the sum equals half of the total, it's a valid split point.
        }
    }

    return count;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 5};
    cout << "Number of ways to split the array: " << numWaysToSplitArray(nums) << endl;
    return 0;
}
