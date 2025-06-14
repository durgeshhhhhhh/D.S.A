#include <bits/stdc++.h>
using namespace std;

int countSubarray(vector<int> &arr, int n, int k)
{
    map<int, int> mpp;

    mpp[0] = 1;
    int prefixSum = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        prefixSum += arr[i];

        int remaining = prefixSum - k;

        cnt = cnt + mpp[remaining];

        mpp[prefixSum]++;
    }

    return cnt;
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

    cout << countSubarray(arr, n, k);

    return 0;
}