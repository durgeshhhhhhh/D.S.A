#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &arr, int n)
{
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cnt0++;
        }
        else if (arr[i] == 1)
        {
            cnt1++;
        }
        else
            cnt2++;
    }

    for (int j = 0; j < cnt0; j++)
    {
        arr[j] = 0;
    }

    for (int k = cnt0; k < cnt0 + cnt1; k++)
    {
        arr[k] = 1;
    }

    for (int l = cnt0 + cnt1; l < n; l++)
    {
        arr[l] = 2;
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

    sortColors(arr, n);

    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }

    return 0;
}