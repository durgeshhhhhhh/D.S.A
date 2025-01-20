#include <bits/stdc++.h>
using namespace std;

int longestSubArray(vector<int> arr, int n, int k)
{
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];

            if (sum == 3)
                maxi = max(maxi, j - i + 1);
        }
    }
    return maxi;
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

    int result = longestSubArray(arr, n, k);
    cout << result;

    return 0;
}