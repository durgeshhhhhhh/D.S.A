#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &arr, int n, int q)
{
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        if (arr[i] == q)
        {
            return arr.size() - 1 - i;
        }
    }

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

    int q;
    cin >> q;

    cout << linearSearch(arr, n, q);

    return 0;
}