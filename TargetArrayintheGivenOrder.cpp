#include <vector>
#include <iostream>
using namespace std;

vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
{
    vector<int> target;

    for (int i = 0; i < nums.size(); i++)
    {
        // Insert nums[i] at the index[i] position in the target array
        target.insert(target.begin() + index[i], nums[i]);
    }

    return target;
}

int main()
{
    vector<int> nums = {0, 1, 2, 3, 4};
    vector<int> index = {0, 1, 2, 2, 1};

    vector<int> result = createTargetArray(nums, index);

    // Output the target array
    for (int num : result)
    {
        cout << num << " ";
    }

    return 0;
}
