#include <bits/stdc++.h>
using namespace std;

int func(vector<int> &nums, int value)
{
    int add = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        add += (nums[i] + value - 1) / value;
    }

    return add;
}

int smallestDivisor(vector<int> &nums, int threshold)
{
    int n = nums.size();

    int high = *max_element(nums.begin(), nums.end());
    int low = 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        int number = func(nums, mid);

        if (number <= threshold)
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
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

    int threshold;
    cin >> threshold;

    cout << smallestDivisor(nums, threshold);

    return 0;
}