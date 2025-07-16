#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n <= 1)
    {
        cout << "It's not a prime number.";
        return 0;
    }

    int cnt = 0;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;

            if (n / i != i)
                cnt++;
        }
    }

    if (cnt == 2)
        cout << "It's a prime number.";
    else
        cout << "It's not a prime number.";

    return 0;
}