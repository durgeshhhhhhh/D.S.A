#include <bits/stdc++.h>
using namespace std;

void func()
{
    static int x = 10; // this code runs for 1-times

    cout << x << endl; // This two lines run for all  times
    x++;
}

int main()
{
    func();
    func();
    func();
    func();
    func();
    return 0;
}