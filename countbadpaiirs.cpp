#include <unordered_map>
#include <vector>

class Solution
{
public:
    long long countBadPairs(std::vector<int> &nums)
    {
        long long n = nums.size();
        long long totalPairs = (n * (n - 1)) / 2; // Total possible pairs

        std::unordered_map<int, long long> freq;
        long long goodPairs = 0;

        for (int i = 0; i < n; i++)
        {
            int diff = nums[i] - i;
            if (freq.find(diff) != freq.end())
            {
                goodPairs += freq[diff]; // Add count of previous occurrences of diff
            }
            freq[diff]++; // Increment frequency of diff
        }

        return totalPairs - goodPairs; // Bad pairs = Total pairs - Good pairs
    }
};
