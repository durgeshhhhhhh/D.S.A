#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &nums)
{
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        int mini = i;
        for (int j = i; j < n; j++)
        {
            if (nums[j] < nums[mini])
            {
                mini = j;
            }
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
    {
        cin >> nums[i];
    }

    selectionSort(nums);

    for (int j = 0; j < n; j++)
    {
        cout << nums[j] << " ";
    }

    return 0;
}