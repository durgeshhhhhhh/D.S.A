#include <bits/stdc++.h>
using namespace std;

int cubeRoot(int n, int r)
{
    int low = 1;
    int high = n;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (pow(mid, r) == n)
        {
            return mid;
        }
        else if (pow(mid, r) < n)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
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