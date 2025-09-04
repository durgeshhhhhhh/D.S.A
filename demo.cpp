#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10;

    cout << &n << endl;

    int *ptr = &n;

    cout << ptr;
}