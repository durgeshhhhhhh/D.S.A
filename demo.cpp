#include <bits/stdc++.h>
using namespace std;

int upperBound(vector<int> &nums, int x)
{
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] <= x)
        {
            ans = nums[mid];
            low = mid+1;
        }
        else
        {
            high = mid - 1;
        }
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

    cout << upperBound(nums, x);

    return 0;
}