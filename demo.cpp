#include <bits/stdc++.h>
using namespace std;

int numberAppearsOnce(vector<int> &arr, int n)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    for (auto it : mpp)
    {
        if (it.second == 1)
            return it.first;
    }

    return -1;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = numberAppearsOnce(arr, n);
    cout << result;

    return 0;
}