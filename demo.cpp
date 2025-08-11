#include <bits/stdc++.h>
using namespace std;

int totalTime(vector<int> &nums, int h)
{
    int totalHours = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        totalHours += ceil(double(nums[i]) / double(h));
    }

    cout << totalHours << endl;

    return totalHours;
}

int minEatingSpeed(vector<int> &nums, int hours)
{
    int n = nums.size();

    //    int numsMaxx = *max_element(nums.begin(), nums.end());

    int maxx = nums[0];
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > maxx)
        {
            maxx = nums[i];
        }
    }

    for (int i = 1; i <= maxx; i++)
    {
        int requireTime = totalTime(nums, i);

        if (requireTime <= hours)
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

    int hours;
    cin >> hours;

    cout << minEatingSpeed(nums, hours);

    return 0;
}