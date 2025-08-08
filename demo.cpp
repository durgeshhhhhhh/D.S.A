#include <bits/stdc++.h>
using namespace std;

int squareRoot(int n)
{
    int low = 1;
    int high = n;
    int ans = 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (mid * mid <= n)
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
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