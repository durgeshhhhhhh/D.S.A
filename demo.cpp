#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &arr, int n)
{
    int xor1 = 0;
    for (int i = 1; i <= n; i++)
    {
        xor1 = xor1 ^ i;
    }

    int xor2 = 0;
    for (int i = 0; i < n; i++)
    {
        xor2 = xor2 ^ arr[i];
    }

    return xor1 ^ xor2;
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

    cout << missingNumber(arr, n);

    return 0;
}