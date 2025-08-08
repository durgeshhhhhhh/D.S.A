#include <bits/stdc++.h>
using namespace std;

int peakElement(vector<int> &nums)
{
    int n = nums.size();

    if (n == 1)
        return 0;

    if (nums[0] > nums[1])
        return 0;
    else if (nums[n - 1] > nums[n - 2])
        return n - 1;

    int low = 1;
    int high = n - 2;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if ((nums[mid] > nums[mid - 1]) && (nums[mid] > nums[mid + 1]))
        {
            return mid;
        }
        else if (nums[mid] > nums[mid - 1])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
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