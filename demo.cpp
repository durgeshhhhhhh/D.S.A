#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
        return n;

    int lDigit = fibonacci(n - 1);
    int slDigit = fibonacci(n - 2);

    return lDigit + slDigit;
}

int main()
{

    int n;
    cin >> n;

    cout << fibonacci(n);
}