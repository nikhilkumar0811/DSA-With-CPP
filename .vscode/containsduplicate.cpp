#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    unordered_set<int> seen; // Use an unordered_set to track seen numbers
    for (int num : nums)
    {
        if (seen.find(num) != seen.end())
        {
            return true; // Duplicate found
        }
        seen.insert(num); // Add number to the set
    }
    return false; // No duplicates found
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    if (containsDuplicate(nums))
    {
        cout << "The array contains duplicates." << endl;
    }
    else
    {
        cout << "The array does not contain duplicates." << endl;
    }

    return 0;
}
