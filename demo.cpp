#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums, int low, int mid, int high)
{
    vector<int> ans;
    int i = low;
    int j = mid + 1;

    while (i <= mid && j <= high)
    {
        if (nums[i] <= nums[j])
        {
            ans.push_back(nums[i]);
            i++;
        }
        else
        {
            ans.push_back(nums[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        ans.push_back(nums[i]);
        i++;
    }

    while (j <= high)
    {
        ans.push_back(nums[j]);
        j++;
    }

    for (i = low; i <= high; i++)
    {
        nums[i] = ans[i - low];
    }
}

void mergeSort(vector<int> &nums, int low, int high)
{
    if (low >= high)
        return;

    int mid = (low + high) / 2;

    mergeSort(nums, low, mid);
    mergeSort(nums, mid + 1, high);

    merge(nums, low, mid, high);
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    mergeSort(nums, 0, n - 1);

    for (int x : nums)
        cout << x << " ";

    return 0;
}