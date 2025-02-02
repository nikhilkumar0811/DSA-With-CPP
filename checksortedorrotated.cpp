#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int count = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            if (nums[i] > nums[(i + 1) % n])
            { // Check decrease with circular index
                count++;
            }
            if (count > 1)
                return false; // More than one decrease means it's not sorted by rotation
        }

        return true;
    }
};

// Main function to test the code
int main()
{
    Solution sol;

    vector<int> nums1 = {3, 4, 5, 1, 2}; // Expected output: true
    vector<int> nums2 = {2, 1, 3, 4};    // Expected output: false
    vector<int> nums3 = {1, 2, 3};       // Expected output: true

    cout << "Test Case 1: " << (sol.check(nums1) ? "true" : "false") << endl;
    cout << "Test Case 2: " << (sol.check(nums2) ? "true" : "false") << endl;
    cout << "Test Case 3: " << (sol.check(nums3) ? "true" : "false") << endl;

    return 0;
}
