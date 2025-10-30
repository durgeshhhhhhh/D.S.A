#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "My name is durgesh";

    int left = 0;
    int right = s.size() - 1;

    while (left < right)
    {
        swap(s[left++], s[right--]);
    }

    cout << s << endl;

    return 0;
}