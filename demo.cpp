#include <bits/stdc++.h>
using namespace std;

void printName(int n)
{

    if (n < 1)
    {
        return;
    }
    printName(n - 1);
    cout << n << endl;
};

int main()
{
    int n;
    cin >> n;

    printName(n);
}