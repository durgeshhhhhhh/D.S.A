#include <bits/stdc++.h>
using namespace std;

int cubeRoot(int n, int r)
{
    for (int i = 1; i <= n; i++)
    {
        if (pow(i, r) == n)
        {
            return i;
        }

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