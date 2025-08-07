#include <bits/stdc++.h>
using namespace std;

int peakElement(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (i == 0 && nums[i + 1] < nums[i])
        {
            return nums[i];
        }
        else if (i == n - 1 && nums[i] > nums[i - 1])
        {
            return nums[i];
        }
        else
        {
            if (nums[i] > nums[i + 1] && nums[i] > nums[i - 1])
            {
                return nums[i];
            }
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

    cout << peakElement(nums);

    return 0;
}