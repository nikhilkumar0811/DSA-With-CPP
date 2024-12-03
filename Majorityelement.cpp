#include <iostream>
#include <vector>
using namespace std;

// Function to find the majority element
int majorityElement(vector<int> &nums)
{
    int candidate = 0, count = 0;

    // Step 1: Find a candidate for the majority element
    for (int num : nums)
    {
        if (count == 0)
        {
            candidate = num;
            count = 1;
        }
        else if (num == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    // Step 2: Verify if the candidate is actually the majority element
    count = 0;
    for (int num : nums)
    {
        if (num == candidate)
        {
            count++;
        }
    }

    if (count > nums.size() / 2)
    {
        return candidate;
    }

    // If no majority element is found
    return -1;
}

int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    int result = majorityElement(nums);

    if (result != -1)
    {
        cout << "The majority element is: " << result << endl;
    }
    else
    {
        cout << "No majority element found." << endl;
    }
    return 0;
}
