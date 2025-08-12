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

    int maxx = *max_element(nums.begin(), nums.end());

    for (int i = 1; i <= maxx; i++)
    {
        int number = func(nums, i);

        if (number <= threshold)
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

    int threshold;
    cin >> threshold;

    cout << smallestDivisor(nums, threshold);

    return 0;
}