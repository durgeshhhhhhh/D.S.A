#include <bits/stdc++.h>
using namespace std;

int maximumSubarraySum(vector<int> &arr, int n)
{
    int maxx = INT_MIN;
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            int summ = 0;
            for (int k = i; k <= j; k++)
            {
                summ += arr[k];
                maxx = max(maxx, summ);
            }
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