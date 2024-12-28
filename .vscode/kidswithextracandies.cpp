#include <bits/stdc++.h>
using namespace std;
vector<bool> kidswithCandies(vector<int> &candies, int extracandies)
{
    int n = candies.size();
    int maxC = *max_element(begin(candies), end(candies));
    vector<bool> result(n, false);
    for (int i = 0; i < n; i++)
    {
        if (candies[i] + extracandies >= maxC)
        {
            result[i] = true;
        }
    }
    return result;
}
int main()
{
    vector<int> candies = {2, 3, 5, 1, 3};
    int extracandies = 3;
    vector<bool> result = kidswithCandies(candies, extracandies);

    for (int i = 0; i < result.size(); i++)
    {
        if (result[i])
        {
            cout << " " << "true" << ",";
        }
        else
        {
            cout << "false";
        }
    }
    cout << endl;
    return 0;
}