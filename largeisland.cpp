#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    int n;
    vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

    int largestIsland(vector<vector<int>> &grid)
    {
        n = grid.size();
        unordered_map<int, int> islandSize;
        int islandId = 2; // Start from 2 to distinguish from original 1s
        int maxIsland = 0;

        // Step 1: Use DFS to mark islands and calculate sizes
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1)
                {
                    islandSize[islandId] = dfs(grid, i, j, islandId);
                    maxIsland = max(maxIsland, islandSize[islandId]);
                    islandId++;
                }
            }
        }

        // Step 2: Try flipping a '0' to '1' to maximize the island size
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 0)
                {
                    unordered_set<int> neighborIslands;
                    int newSize = 1; // Start with the flipped 1

                    for (auto &dir : directions)
                    {
                        int ni = i + dir[0], nj = j + dir[1];
                        if (ni >= 0 && nj >= 0 && ni < n && nj < n && grid[ni][nj] > 1)
                        {
                            neighborIslands.insert(grid[ni][nj]);
                        }
                    }

                    for (int id : neighborIslands)
                    {
                        newSize += islandSize[id];
                    }

                    maxIsland = max(maxIsland, newSize);
                }
            }
        }

        return maxIsland;
    }

private:
    int dfs(vector<vector<int>> &grid, int i, int j, int islandId)
    {
        if (i < 0 || j < 0 || i >= n || j >= n || grid[i][j] != 1)
        {
            return 0;
        }

        grid[i][j] = islandId; // Mark the island
        int size = 1;

        for (auto &dir : directions)
        {
            size += dfs(grid, i + dir[0], j + dir[1], islandId);
        }

        return size;
    }
};
