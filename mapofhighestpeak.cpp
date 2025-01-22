#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

vector<vector<int>> highestPeak(vector<vector<int>> &isWater)
{
    int m = isWater.size();
    int n = isWater[0].size();

    vector<vector<int>> heights(m, vector<int>(n, -1)); // Initialize heights with -1
    queue<pair<int, int>> q;

    // Directions for moving up, down, left, and right
    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    // Enqueue all water cells and set their height to 0
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (isWater[i][j] == 1)
            {
                heights[i][j] = 0;
                q.push({i, j});
            }
        }
    }

    // BFS to propagate heights from water cells
    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();

        for (auto [dx, dy] : directions)
        {
            int nx = x + dx, ny = y + dy;

            // If the neighbor is within bounds and not visited
            if (nx >= 0 && nx < m && ny >= 0 && ny < n && heights[nx][ny] == -1)
            {
                heights[nx][ny] = heights[x][y] + 1; // Assign height
                q.push({nx, ny});                    // Enqueue the cell
            }
        }
    }

    return heights;
}

int main()
{
    vector<vector<int>> isWater = {
        {0, 1},
        {0, 0}};

    vector<vector<int>> result = highestPeak(isWater);

    // Print the result
    for (const auto &row : result)
    {
        for (int h : row)
        {
            cout << h << " ";
        }
        cout << endl;
    }

    return 0;
}
