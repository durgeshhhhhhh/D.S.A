#include <bits/stdc++.h>
using namespace std;

int func(int mid, int r, int n)
{
    long long ans = 1;

    for (int i = 1; i <= r; i++)
    {
        ans = ans * mid;
        if (ans > n)
            return 2;
    }

    if (ans == n)
    {
        return 1;
    }
    return 0;
}

int cubeRoot(int n, int r)
{

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (r == 1)
        return n;

    int low = 1;
    int high = n;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        int res = func(mid, r, n);

        if (res == 1)
            return mid;
        else if (res == 2)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1;
}

int main()
{
    int n;
    cin >> n;

    int r;
    cin >> r;

    cout << cubeRoot(n, r);

    return 0;
}