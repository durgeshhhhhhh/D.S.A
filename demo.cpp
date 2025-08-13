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

    for (int i = maxxWeight; i <= summ; i++)
    {
        int requiredDays = countDays(weights, i);

        if (requiredDays <= days)
        {
            return i;
        }
    }

    return -1;
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