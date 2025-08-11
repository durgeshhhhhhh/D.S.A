#include <bits/stdc++.h>
using namespace std;

long long totalHours(vector<int> &nums, int hours)
{
    long long time = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        time += (nums[i] + hours - 1) / hours;
    }

    return time;
}

int minEatingSpeed(vector<int> &nums, int h)
{
    int n = nums.size();

    int maxx = *max_element(nums.begin(), nums.end());

    int low = 1;
    int high = maxx;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        long long requireTime = totalHours(nums, mid);

        if (requireTime <= h)
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

    int hours;
    cin >> hours;

    cout << minEatingSpeed(nums, hours);

    return 0;
}