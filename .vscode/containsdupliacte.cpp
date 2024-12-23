#include <bits/stdc++.h>
using namespace std;
bool containsduplicate(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                return true; // Return true if a duplicate is found
            }
        }
    }
    return false; // Return false if no duplicates are found
}
int main()
{
    vector<int> nums = {1, 2, 3, 3, 4, 5};
    bool result = containsduplicate(nums); // Fix: Use a boolean variable to store the result
    if (result)                            // Fix: Check the value of 'result' instead of the function name
    {
        cout << "There are duplicate numbers in the array." << endl;
    }
    else
    {
        cout << "There are no duplicate numbers in the array." << endl;
    }
    return 0;
}
