#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int dup = n;
    int rev_no = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        rev_no = (rev_no * 10) + lastDigit;

        n = n / 10;
    }

    if (rev_no == dup)
        cout << "yes, it's a pallindrome";
    else
        cout << "No, it's not a pallindrome";
}
