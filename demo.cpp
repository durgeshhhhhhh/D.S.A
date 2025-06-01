#include <bits/stdc++.h>
using namespace std;

void longestSubarray(vector<int> &arr, int n, int k)
{
    int len = 0;
    for (int i = 0; i < n; i++)
    {
        int summation = 0;
        for (int j = i; j < n; j++)
        {
            summation = summation + arr[j];

            if (summation == k)
            {
                len = max(len, j - i + 1);
            }
        }
    }

    cout << len;
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

    longestSubarray(arr, n, k);
}