#include <bits/stdc++.h>
using namespace std;
void changeA(int *ptr)
{
    *ptr = 20;
}

int main()
{
    int a = 10;

    changeA(&a);

    cout << "Value of a is " << a;

    return 0;
}