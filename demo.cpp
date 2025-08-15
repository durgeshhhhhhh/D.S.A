#include <bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int> &nums, int k)
{
    int n = nums.size();
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] - (mid + 1) < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return low + k;
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

    int k;
    cin >> k;

    cout << findKthPositive(nums, k);

    return 0;
}