#include <bits/stdc++.h>
using namespace std;

bool twoSum(vector<int> arr, int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum = arr[i] + arr[j];

            if (sum == k)
                return true;
        }
    }
    return false;
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

    bool result = twoSum(arr, n, k);
    cout << result;

    return 0;
}