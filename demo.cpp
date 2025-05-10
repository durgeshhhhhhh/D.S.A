#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int cnt = 0;
    cin >> n;

    cout << "Reverse of number is ";
    while (n > 0)
    {
        int lastDigit = n % 10;
        cout << lastDigit;
        n = n / 10;
        cnt++;
    }
    cout << endl;
    cout << "Number of digits: " << cnt;
}
