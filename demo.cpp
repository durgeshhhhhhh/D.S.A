#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &nums)
{
    int n = nums.size();

    for (int i = 0; i < n - 1; i++)
    {
        bool isSwapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                // swap(nums[j], nums[j + 1]);

                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;

                isSwapped = true;
            }
        }

        if (!isSwapped)
            break;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    bubbleSort(nums);

    for (int x : nums)
        cout << x << " ";

    return 0;
}