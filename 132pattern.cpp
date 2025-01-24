#include <iostream>
#include <vector>
#include <stack>
#include <climits>

using namespace std;

bool find132pattern(vector<int> &nums)
{
    stack<int> s;        // Stack to keep track of potential "3" elements
    int third = INT_MIN; // Represents the "2" in the 132 pattern
    int n = nums.size();

    // Traverse the array from right to left
    for (int i = n - 1; i >= 0; i--)
    {
        // Check if the current element can be the "1" in the 132 pattern
        if (nums[i] < third)
            return true;

        // Update the "third" element by popping elements smaller than nums[i]
        while (!s.empty() && s.top() < nums[i])
        {
            third = s.top();
            s.pop();
        }

        // Push the current element as a candidate for the "3" in the 132 pattern
        s.push(nums[i]);
    }

    return false; // No 132 pattern found
}

int main()
{
    // Test case 1
    vector<int> nums1 = {1, 2, 3, 4};
    cout << "Test case 1: " << (find132pattern(nums1) ? "True" : "False") << endl;

    // Test case 2
    vector<int> nums2 = {3, 1, 4, 2};
    cout << "Test case 2: " << (find132pattern(nums2) ? "True" : "False") << endl;

    // Test case 3
    vector<int> nums3 = {-1, 3, 2, 0};
    cout << "Test case 3: " << (find132pattern(nums3) ? "True" : "False") << endl;

    return 0;
}
