#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int original_number = n;

    int rev_no = 0;

    while (n > 0)
    {
        int rem = n % 10;
        rev_no = rev_no * 10 + rem;
        n = n / 10;
    }

    if (rev_no == original_number)
        cout << "true, it's a pallindronme.";
    else
        cout << "False, it's not a pallindrome.";

    return 0;
}