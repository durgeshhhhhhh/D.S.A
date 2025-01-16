#include <bits/stdc++.h>
using namespace std;

int numberAppearsOnce(vector<int> &arr, int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    vector<int> hash(max + 1, 0);

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    for (int i = 0; i <= max; i++)
    {
        if (hash[i] == 1)
            return i;
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