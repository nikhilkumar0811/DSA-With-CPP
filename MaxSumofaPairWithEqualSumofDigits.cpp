#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution
{
public:
    int maximumSum(std::vector<int> &nums)
    {
        std::unordered_map<int, std::vector<int>> digitSumMap;

        // Helper lambda to calculate the sum of digits
        auto digitSum = [](int num)
        {
            int sum = 0;
            while (num > 0)
            {
                sum += num % 10;
                num /= 10;
            }
            return sum;
        };

        // Group numbers by their digit sum
        for (int num : nums)
        {
            int sum = digitSum(num);
            digitSumMap[sum].push_back(num);
        }

        int maxSum = -1;

        // Iterate through the map to find the maximum pair sum
        for (auto &[sum, group] : digitSumMap)
        {
            if (group.size() > 1)
            {
                std::sort(group.begin(), group.end(), std::greater<int>());
                maxSum = std::max(maxSum, group[0] + group[1]);
            }
        }

        return maxSum;
    }
};
