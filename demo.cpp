#include <bits/stdc++.h>
using namespace std;

int countDays(vector<int> &weights, int capacity)
{
    int days = 1;
    int load = 0;

    for (int i = 0; i < weights.size(); i++)
    {
        if (load + weights[i] > capacity)
        {
            days += 1;
            load = weights[i];
        }
        else
        {
            load += weights[i];
        }
    }

    return days;
}

int shipWithinDays(vector<int> &weights, int days)
{
    int n = weights.size();

    int maxxWeight = *max_element(weights.begin(), weights.end());

    int summ = 0;
    for (int i = 0; i < n; i++)
    {
        summ += weights[i];
    }

    int low = maxxWeight;
    int high = summ;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        int requiredDays = countDays(weights, mid);

        if (requiredDays <= days)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return low;
}

int main()
{
    int n;
    cin >> n;

    vector<int> weights(n);

    for (int i = 0; i < n; i++)
    {
        cin >> weights[i];
    }

    int days;
    cin >> days;

    cout << shipWithinDays(weights, days);

    return 0;
}