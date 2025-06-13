#include <bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int> &arr, int n, int k)
{
    unordered_map<int, int> mpp;
    int prefixSum = 0;
    int maxLen = 0;

    for (int i = 0; i < n; i++)
    {
        prefixSum += arr[i];

        if (prefixSum == k)
            maxLen = max(maxLen, i + 1);

        int remaining = prefixSum - k;

        if (mpp.find(remaining) != mpp.end())
            maxLen = max(maxLen, i - mpp[remaining]);

        if (mpp.find(prefixSum) == mpp.end())
            mpp[prefixSum] = i;
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