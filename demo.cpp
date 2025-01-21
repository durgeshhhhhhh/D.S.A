#include <bits/stdc++.h>
using namespace std;

bool twoSum(vector<int> arr, int n, int k)
{
    int left = 0;
    int right = n - 1;
    sort(arr.begin(), arr.end());

    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == k)
        {
            return true;
        }
        else if (sum < k)
        {
            left++;
        }
        else if (sum > k)
        {
            right--;
        }
    }

    return false;
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

    bool result = twoSum(arr, n, k);
    cout << result;

    /*if (result[0] == -1 && result[1] == -1)
    {
        cout << "No valid pair found";
    }
    else
    {
        cout << "Indices: " << result[0] << ", " << result[1];
    }*/

    return 0;
}