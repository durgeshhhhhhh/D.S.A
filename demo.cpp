#include <bits/stdc++.h>
using namespace std;

bool ls(vector<int> arr, int num)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
            return true;
    }

    return false;
}

int longestConsecutives(vector<int> &arr, int n)
{
    int len = 1;
    for (int i = 0; i < n; i++)
    {
        int cnt = 1;
        int x = arr[i];

        while (ls(arr, x + 1) == true)
        {
            x = x + 1;
            cnt++;
        }

        len = max(len, cnt);
    }

    return len;
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

    cout << longestConsecutives(arr, n);
}