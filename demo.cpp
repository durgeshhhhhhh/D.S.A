#include <bits/stdc++.h>
using namespace std;

vector<int> maximumSubarraySum(vector<int> &arr, int n)
{
    int maxi = INT_MIN;
    int sum = 0, ansStart = -1, ansEnd = -1, start;
    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
        {
            start = i;
        }

        sum += arr[i];
        if (sum > maxi)
        {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }

        if (sum < 0)
        {
            sum = 0;
        }
    }
    return {ansStart, ansEnd, maxi};
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

    vector<int> result = maximumSubarraySum(arr, n);

    cout << ":::: Sub-Array ::::" << endl;
    cout << "[";
    for (int i = result[0]; i <= result[1]; i++)
    {
        cout << arr[i] << ",";
    }
    cout << "]";

    cout << endl;
    cout << "maximum is " << result[2];

    return 0;
}