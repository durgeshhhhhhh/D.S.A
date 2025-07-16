#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int original_number = n;
    int number = n;

    int cnt = 0;

    while (n > 0)
    {
        cnt++;
        n = n / 10;
    }

    int new_number = 0;

    while (original_number > 0)
    {
        int rem = original_number % 10;

        new_number += pow(rem, cnt);

        original_number = original_number / 10;
    }

    cout << new_number << endl;

    if (number == new_number)
        cout << "Yes! it's an Armstrong";
    else
        cout << "No! it's not an Armstrong";

    return 0;
}