#include <iostream>
#include <vector>

using namespace std;

vector<int> pivotArray(vector<int> &nums, int pivot)
{
    vector<int> left, mid, right;

    // Categorize elements
    for (int num : nums)
    {
        if (num < pivot)
            left.push_back(num);
        else if (num == pivot)
            mid.push_back(num);
        else
            right.push_back(num);
    }

    // Merge all parts
    left.insert(left.end(), mid.begin(), mid.end());
    left.insert(left.end(), right.begin(), right.end());

    return left;
}

// Driver code
int main()
{
    vector<int> nums = {9, 12, 5, 10, 14, 3, 10};
    int pivot = 10;

    vector<int> result = pivotArray(nums, pivot);

    // Print output
    for (int num : result)
    {
        cout << num << " ";
    }

    return 0;
}
