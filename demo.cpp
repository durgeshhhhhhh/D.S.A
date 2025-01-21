#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> arr, int n, int k)
{
    int left = 0;
    int right = n - 1;
    sort(arr.begin(), arr.end());

    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == k)
        {
            return {left, right};
        }
        else if (sum < k)
        {
            left++;
        }
        else
            right--;
    }

    return {-1, -1};
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    vector<int> result = twoSum(arr, n, k);

    if (result[0] == -1 && result[1] == -1)
    {
        cout << "No valid pair found";
    }
    else
    {
        cout << "Indices: " << result[0] << ", " << result[1];
    }

    return 0;
}