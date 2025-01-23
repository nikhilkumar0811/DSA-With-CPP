#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

long long gridGame(vector<vector<int>> &grid)
{
    int n = grid[0].size();
    vector<long long> prefixTop(n + 1, 0), prefixBottom(n + 1, 0);

    // Calculate prefix sums for the top and bottom rows
    for (int i = 0; i < n; i++)
    {
        prefixTop[i + 1] = prefixTop[i] + grid[0][i];
        prefixBottom[i + 1] = prefixBottom[i] + grid[1][i];
    }

    long long result = LLONG_MAX;

    // Evaluate the maximum score the second robot can achieve
    for (int i = 0; i < n; i++)
    {
        long long topPath = prefixTop[n] - prefixTop[i + 1]; // Remaining top path
        long long bottomPath = prefixBottom[i];              // Collected bottom path
        long long secondRobotScore = max(topPath, bottomPath);
        result = min(result, secondRobotScore);
    }

    return result;
}

int main()
{
    vector<vector<int>> grid = {
        {2, 5, 4},
        {1, 5, 1}};

    cout << gridGame(grid) << endl; // Output the result

    return 0;
}
