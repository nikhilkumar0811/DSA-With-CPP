#include <bits/stdc++.h>
using namespace std;
int maxArea(vector<int> &height)
{
    int left = 0;
    int right = height.size() - 1;
    int maxwater = 0;
    while (left < right)
    {
        maxwater = max(maxwater, (right - left) * min(height[left], height[right]));
        if (height[left] < height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return maxwater;
}
int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "maximum area:" << maxArea(height);
    return 0;
}