#include <bits/stdc++.h>
using namespace std;

void sum(int i, int j)
{
    if (i < 1)
    {
        cout << j;
        return;
    }

    sum(i - 1, j + i);
}

int main()
{
    int n;
    cin >> n;

    sum(n, 0);
}