#include <iostream>
#include <vector>
using namespace std;

// Function to find the majority element
int majorityElement(vector<int> &nums)
{
    int count = 0, candidate = 0;

    // Phase 1: Find a candidate using Boyer-Moore Voting Algorithm
    for (int num : nums)
    {
        if (count == 0)
        {
            candidate = num;
        }
        count += (num == candidate) ? 1 : -1;
    }

    // Phase 2: Verify the candidate
    count = 0;
    for (int num : nums)
    {
        if (num == candidate)
        {
            count++;
        }
    }

    return (count > nums.size() / 2) ? candidate : -1; // Return candidate if it's a majority
}

int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    int result = majorityElement(nums);

    if (result != -1)
    {
        cout << "Majority Element: " << result << endl;
    }
    else
    {
        cout << "No majority element found." << endl;
    }

    return 0;
}
