#include <bits/stdc++.h>
using namespace std;

int maximumSubarraySum(vector<int> &arr, int n)
{
    int i = 0;
    int maxx = INT_MIN;
    int summ = 0;
    while (i < n)
    {
        summ = summ + arr[i];

        maxx = max(summ, maxx);

        if (summ < 0)
        {
            summ = 0;
        }

        i++;
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