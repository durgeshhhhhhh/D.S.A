#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    int lastSecond = 0;
    int lastFirst = 1;
    int current;

    for (int i = 2; i <= n; i++)
    {
        current = lastSecond + lastFirst;
        lastSecond = lastFirst;
        lastFirst = current;
    }

    return lastFirst;
}

int main()
{
    int n;
    cin >> n;

    cout << fibonacci(n);

    return 0;
}