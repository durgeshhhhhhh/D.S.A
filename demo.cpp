#include <bits/stdc++.h>
using namespace std;

int fibonnaci(int n)
{
    if (n < 2)
        return n;

    vector<int> ans(n + 1);
    ans[0] = 0;
    ans[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        ans[i] = ans[i - 1] + ans[i - 2];
    }

    return ans[n];
}

int main()
{
    int n;
    cin >> n;

    int result = fibonnaci(n);
    cout << result;

    return 0;
}