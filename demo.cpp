#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    int dup1 = n;
    int dup2 = n;
    int armstrong = 0;

    while (n > 0)
    {
        n = n / 10;
        cnt++;
    }

    while (dup1 > 0)
    {
        int lastDigit = dup1 % 10;
        armstrong = pow(lastDigit, cnt) + armstrong;
        dup1 = dup1 / 10;
    }

    if (armstrong == dup2)
    {
        cout << "Yes, it's a armstrong number";
    }

    return 0;
}
