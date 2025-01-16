#include <bits/stdc++.h>
using namespace std;

int numberAppearsOnce(vector<int> &arr, int n)
{
    int xorr = 0;

    for (int i = 0; i < n; i++)
    {
        xorr = xorr ^ arr[i];
    }
    return xorr;
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

    int result = numberAppearsOnce(arr, n);
    cout << result;

    return 0;
}