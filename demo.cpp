#include <bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int> &nums, int k)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] <= k)
        {
            k++;
        }
        else
        {
            return k;
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

    int k;
    cin >> k;

    cout << findKthPositive(nums, k);

    return 0;
}