#include <bits/stdc++.h>
using namespace std;

int countSubarray(vector<int> &arr, int n, int k)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {

        int subarraySum = 0;
        for (int j = i; j < n; j++)
        {
            subarraySum = subarraySum + arr[j];

            if (subarraySum == k)
            {
                cnt++;
            }
        }
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