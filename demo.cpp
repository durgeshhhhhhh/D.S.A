#include <bits/stdc++.h>
using namespace std;

void printName(int n)
{

    if (n < 1)
        return;
    cout << "Durgesh Shekhawat" << endl;
    printName(n - 1);
};

int main()
{
    int n;
    cin >> n;

    printName(n);
}