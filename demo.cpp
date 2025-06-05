#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &arr, int n)
{
    int cnt = 0;
    int el;
    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
        {
            el = arr[i];
        }

        if (arr[i] == el)
        {
            cnt++;
        }
        else
            cnt--;
    }

    int count;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == el)
            count++;
    }

    if (count > n / 2)
        return el;
    else
        return -1;
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

    cout << majorityElement(arr, n);
}