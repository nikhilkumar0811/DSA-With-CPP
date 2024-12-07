#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Function to calculate the maximum profit
int maxProfit(const vector<int> &prices)
{
    int minPrice = INT_MAX; // Initialize to the largest possible integer
    int maxProfit = 0;      // Maximum profit starts at 0

    for (int price : prices)
    {
        // Update the minimum price if a lower price is found
        if (price < minPrice)
        {
            minPrice = price;
        }
        // Calculate potential profit and update maxProfit if it's greater
        else
        {
            maxProfit = max(maxProfit, price - minPrice);
        }
    }
    return maxProfit;
}

int main()
{
    // Example input: Stock prices on consecutive days
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    int result = maxProfit(prices);
    if (result > 0)
    {
        cout << "Maximum profit: " << result << endl;
    }
    else
    {
        cout << "No profit can be made." << endl;
    }

    return 0;
}
