#include <bits/stdc++.h>
using namespace std;

bool pallindrome(int n, int original_number)
{
    int rev_number = 0;

    while (n > 0)
    {
        int remm = n % 10;

        rev_number = rev_number * 10 + remm;

        n = n / 10;
    }

    if (rev_number == original_number)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    int original_number = n;

    cout << pallindrome(n, original_number);

    return 0;
}