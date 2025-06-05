#include <bits/stdc++.h>
using namespace std;

int maximumSubarraySum(vector<int> &arr, int n)
{
    int maxx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int summation = 0;
        for (int j = i; j < n; j++)
        {
            summation += arr[j];
            maxx = max(maxx, summation);
        }
    }

    return maxx;
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

    cout << maximumSubarraySum(arr, n);

    return 0;
}