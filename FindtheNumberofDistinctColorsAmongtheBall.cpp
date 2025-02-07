#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    vector<int> queryResults(int limit, vector<vector<int>> &queries)
    {
        vector<int> result;
        unordered_map<int, int> ballToColor;
        unordered_map<int, int> colorCount;

        for (const auto &query : queries)
        {
            int ball = query[0];
            int color = query[1];

            // If the ball was previously colored
            if (ballToColor.find(ball) != ballToColor.end())
            {
                int prevColor = ballToColor[ball];
                // Decrement the count of the previous color
                if (--colorCount[prevColor] == 0)
                {
                    colorCount.erase(prevColor);
                }
            }

            // Assign the new color to the ball
            ballToColor[ball] = color;
            // Increment the count of the new color
            colorCount[color]++;

            // The number of distinct colors is the size of colorCount
            result.push_back(colorCount.size());
        }

        return result;
    }
};
