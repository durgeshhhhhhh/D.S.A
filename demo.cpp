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

    return bouquets >= m;
}

int minDays(vector<int> &nums, int m, int k)
{

    int n = nums.size();

    if (n < m * k)
    {
        return -1;
    }

    int low = *min_element(nums.begin(), nums.end());
    int high = *max_element(nums.begin(), nums.end());

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (possible(nums, mid, m, k))
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