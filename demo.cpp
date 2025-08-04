#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int rev_number = 0;

    while (n > 0)
    {
        int remm = n % 10;

        rev_number = rev_number * 10 + remm;

        n = n / 10;
    }

    cout << rev_number;

    return 0;
}