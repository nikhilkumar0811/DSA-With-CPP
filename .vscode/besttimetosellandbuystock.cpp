#include <bits/stdc++.h>
using namespace std;
int maxprofit(vector<int> prices)
{
    int minprice = INT_MAX;
    int maxprofit = 0;
    for (int price : prices)
    {
        if (price < minprice)
        {
            minprice = price;
        }
        else
        {
            maxprofit = max(maxprofit, price - minprice);
        }
    }
    return maxprofit;
}
int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int result = maxprofit(prices);
    if (result > 0)
    {
        cout << "Maximum profit:" << result << endl;
    }
    else
    {
        cout << "No profit can be made." << endl;
    }
    return 0;
}