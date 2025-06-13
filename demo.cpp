#include <bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int> &arr, int n, int k)
{
    int right = 0;
    int left = 0;
    int summ = 0;
    int maxLen = 0;

    while (right < n)
    {
        while (left <= right && summ > k)
        {
            summ -= arr[left];
            left++;
        }

        if (summ == k)
        {
            int len = right - left + 1;
            maxLen = max(maxLen, len);
        }

        summ += arr[right];
        right++;
    }

    return maxLen;
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

    cout << longestSubarray(arr, n, k);

    return 0;
}