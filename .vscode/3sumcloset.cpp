#include <bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end()); // Sort the array
    int n = nums.size();
    int closest = nums[0] + nums[1] + nums[2]; // Initialize with the sum of the first three elements

    for (int i = 0; i < n - 2; i++)
    {
        int left = i + 1, right = n - 1;
        while (left < right)
        {
            int currentSum = nums[i] + nums[left] + nums[right];

            // If current sum is closer to the target, update closest
            if (abs(target - currentSum) < abs(target - closest))
            {
                closest = currentSum;
            }

            // Move pointers based on comparison
            if (currentSum < target)
            {
                left++; // Increase sum by moving left pointer to the right
            }
            else
            {
                right--; // Decrease sum by moving right pointer to the left
            }
        }
    }
    return closest;
}

int main()
{
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;

    int result = threeSumClosest(nums, target);
    cout << "The sum closest to the target is: " << result << endl;

    return 0;
}
