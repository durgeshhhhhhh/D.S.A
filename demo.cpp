#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &arr, int n)
{
    for (int i = 1; i <= n; i++)
    {
        bool flag = true;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] == i)
            {
                flag = false;
                break;
            }
        }

        if (flag)
            return i;
    }
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