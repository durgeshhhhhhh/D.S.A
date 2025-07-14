#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int rev_no = 0;
    while (n > 0)
    {
        int rem = n % 10;
        n = n / 10;
        rev_no = rev_no * 10 + rem;
    }

    cout << rev_no;

    return 0;
}