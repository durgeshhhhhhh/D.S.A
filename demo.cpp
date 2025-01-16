#include <bits/stdc++.h>
using namespace std;

int numberAppearsOnce(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                cnt++;
            }
        }
        if (cnt == 1)
            return arr[i];
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