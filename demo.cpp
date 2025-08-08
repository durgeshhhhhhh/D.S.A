#include <bits/stdc++.h>
using namespace std;

int squareRoot(int n)
{
    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        if (i * i <= n)
        {
            ans = i;
        }
        else
        {
            break;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    cout << squareRoot(n);

    return 0;
}