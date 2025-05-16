#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mpp[arr[i]] += 1;
    }

    int maxx = 0;
    for (auto it : mpp)
    {
        if (it.second > maxx)
            maxx = it.second;
    }

    for (auto it : mpp)
    {
        if (it.second == maxx)
            cout << it.first << " -----> " << it.second << endl;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;

        cout << mpp[number] << endl;
    }

    return 0;
}