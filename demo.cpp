#include <bits/stdc++.h>
using namespace std;

bool isValid(vector<int> &arr, int maxAllowedTime, int painter)
{
    int current_painter = 1;
    int time = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (time + arr[i] <= maxAllowedTime)
        {
            time += arr[i];
        }
        else
        {
            current_painter++;
            time = arr[i];

            if (current_painter > painter)
                return false;
        }
    }

    return current_painter <= painter ? true : false;
}

int minimumTime(vector<int> &arr, int painter)
{
    int n = arr.size();

    int high = 0;
    int low = 0;
    for (int i = 0; i < n; i++)
    {
        high += arr[i];
        low = max(low, arr[i]);
    }

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (isValid(arr, mid, painter))
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return low;
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

    int m;
    cin >> m;

    cout << minimumTime(arr, m);

    return 0;
}