#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &nums)
{
    int n = nums.size();

    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[mini])
                mini = j;
        }

        int temp = nums[i];
        nums[i] = nums[mini];
        nums[mini] = temp;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    selectionSort(nums);

    for (int x : nums)
        cout << x << " ";

    return 0;
}