#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1;
    cin >> n1;
    int n2;
    cin >> n2;
    int maxi = 0;

    for (int i = 1; i <= min(n1, n2); i++)
    {

        if (n1 % i == 0 && n2 %  i == 0)
                                                       {
            maxi = i;
        }
    }

    cout << maxi;

    return 0;
}