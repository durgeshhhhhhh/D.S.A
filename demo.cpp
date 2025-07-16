#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &nums, int x)
{
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    int ans = n;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }

    return ans;
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

    int x;
    cin >> x;

    cout << lowerBound(nums, x);

    return 0;
}