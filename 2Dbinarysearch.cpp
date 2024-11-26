#include <bits/stdc++.h>
using namespace std;
bool binarysearch(vector<vector<int>> &matrix, int target)
{
    int rows = matrix.size();
    if (rows == 0)
        return false;
    int cols = matrix[0].size();

    int start = 0;
    int end = rows * cols - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int midvalue = matrix[mid / cols][mid % rows];

        if (midvalue == target)
        {
            return true;
        }
        else if (midvalue < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}
int main()
{
    int rows, cols, target;
    cout << "enter the number of rows and colums:" << endl;
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "enter the target values to search:";
    cin >> target;

    if (binarysearch(matrix, target))
    {
        cout << "Target found in the matrix!" << endl;
    }
    else
    {
        cout << "Target not found in the matrix.";
    }
    return 0;
}