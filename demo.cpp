#include <bits/stdc++.h>
using namespace std;

int myAtoi(string s)
{
    int n = s.length();

    int i = 0;

    if (i < n && s[i] == ' ')
    {
        i++;
    }

    if (i == n)
        return 0;

    int sign = 1;
    if (s[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (s[i] == '+')
    {
        i++;
    }

    long long result = 0;
    while (i < n && isdigit(s[i]))
    {
        int digit = s[i] - '0';

        if (result > (INT_MAX - digit) / 10)
        {
            return sign == 1 ? INT_MAX : INT_MIN;
        }

        result = result * 10 + digit;
        i++;
    }

    return sign * result;
}

int main()
{
    string s;
    cin >> s;

    cout << myAtoi(s);

    return 0;
}