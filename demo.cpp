#include <bits/stdc++.h>
using namespace std;

bool possible(vector<int> &nums, int days, int m, int k)
{
    int cnt = 0;
    int bouquets = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] <= days)
        {
            cnt++;
        }
        else
        {
            bouquets += cnt / k;
            cnt = 0;
        }
    }

    bouquets += cnt / k;

    if (bouquets >= m)
        return true;
    else
        return false;
}

int minDays(vector<int> &nums, int m, int k)
{

    int n = nums.size();

    if (n < (m * k))
    {
        return -1;
    }

    int minn = *min_element(nums.begin(), nums.end());
    int maxx = *max_element(nums.begin(), nums.end());

    for (int i = minn; i <= maxx; i++)
    {
        bool check = possible(nums, i, m, k);

        if (check)
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

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int m;
    cin >> m;

    int k;
    cin >> k;

    cout << minDays(nums, m, k);

    return 0;
}