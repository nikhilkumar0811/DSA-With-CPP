#include <bits/stdc++.h>
using namespace std;

// Function to perform binary search on a 2D matrix
bool TwoDbinarysearch(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size(); // Number of rows
    if (row == 0)
        return false; // Edge case: Empty matrix

    int col = matrix[0].size(); // Number of columns
    int start = 0;
    int end = row * col - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        // Convert mid index to 2D matrix indices
        int midValue = matrix[mid / col][mid % col];

        if (midValue == target)
        {
            return true; // Target found
        }
        else if (midValue < target)
        {
            start = mid + 1; // Move right
        }
        else
        {
            end = mid - 1; // Move left
        }
    }

    return false; // Target not found
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}};

    int target = 3;
    if (TwoDbinarysearch(matrix, target))
    {
        cout << "Target " << target << " found in the matrix." << endl;
    }
    else
    {
        cout << "Target " << target << " not found in the matrix." << endl;
    }

    return 0;
}
