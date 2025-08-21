#include <bits/stdc++.h>
using namespace std;

bool isValid(vector<int> &arr, int minAllowedDistance, int cows)
{
    int current_cows = 1;
    int lastStallPosition = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] - lastStallPosition >= minAllowedDistance)
        {
            current_cows++;
            lastStallPosition = arr[i];
        }

        if (current_cows == cows)
            return true;
    }

    return false;
}

int aggresiveCows(vector<int> &arr, int cows)
{
    int n = arr.size();

    sort(arr.begin(), arr.end());

    int low = 1;
    int high = arr[n - 1] - arr[0];

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (isValid(arr, mid, cows))
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return high;
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

    int k;
    cin >> k;

    cout << aggresiveCows(arr, k);

    return 0;
}