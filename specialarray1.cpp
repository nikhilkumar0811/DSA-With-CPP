#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int specialArray(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int x = 0; x <= n; x++)
        {
            int count = lower_bound(nums.begin(), nums.end(), x) - nums.begin();
            if (n - count == x)
                return x;
        }

        return -1;
    }
};
