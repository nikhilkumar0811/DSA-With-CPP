#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    int tupleSameProduct(vector<int> &nums)
    {
        unordered_map<int, int> productCount;
        int n = nums.size();
        int result = 0;

        // Count occurrences of each product
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int product = nums[i] * nums[j];
                productCount[product]++;
            }
        }

        // Calculate result based on combination formula
        for (auto &entry : productCount)
        {
            int freq = entry.second;
            if (freq > 1)
            {
                result += (freq * (freq - 1) / 2) * 8; // C(freq, 2) * 8
            }
        }

        return result;
    }
};

// Driver Code
int main()
{
    Solution sol;
    vector<int> nums = {2, 3, 4, 6};
    cout << "Number of tuples: " << sol.tupleSameProduct(nums) << endl;
    return 0;
}
