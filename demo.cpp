#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices, int n)
{
    int bestBuy = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++)
    {
        if (prices[i] > bestBuy)
        {
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }

        bestBuy = min(bestBuy, prices[i]);
    }

    return maxProfit;
}

int main()
{
    int n;
    cin >> n;

    vector<int> prices(n);

    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    cout << maxProfit(prices, n);

    return 0;
}