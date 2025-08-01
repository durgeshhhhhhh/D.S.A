#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &nums, int low, int high, int target)
{
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (nums[mid] == target)
        return mid;
    else if (nums[mid] > target)
        return binarySearch(nums, low, mid - 1, target);
    else
        return binarySearch(nums, mid + 1, high, target);
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

    int target;
    cin >> target;

    cout << binarySearch(nums, 0, n, target);

    /*for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }*/

    return 0;
}