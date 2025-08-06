#include <bits/stdc++.h>
using namespace std;

int findKRotation(vector<int> &nums)
{
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    int ans = INT_MAX;
    int index = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[low] <= nums[high])
        {
            // ans = min(ans, nums[low]);
            if (nums[low] < ans)
            {
                index = low;
                ans = nums[low];
            }
            break;
        }

        if (nums[low] <= nums[mid])
        {
            // ans = min(ans, nums[low]);
            if (nums[low] < ans)
            {
                index = low;
                ans = nums[low];
            }
            low = mid + 1;
        }
        else
        {
            // ans = min(ans, nums[mid]);
            if (nums[low] < ans)
            {
                index = mid;
                ans = nums[mid];
            }
            high = mid - 1;
        }
    }
    return index;
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

    cout << findKRotation(nums);

    return 0;
}