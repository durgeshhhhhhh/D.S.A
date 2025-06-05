#include <bits/stdc++.h>
using namespace std;

void rearrangeArray(vector<int> &arr, int n)
{
    vector<int> positive;
    vector<int> negative;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            positive.push_back(arr[i]);
        else
            negative.push_back(arr[i]);
    }

    for (int i = 0; i < n / 2; i++)
    {
        arr[2 * i] = positive[i];
        arr[2 * i + 1] = negative[i];
    }
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

    rearrangeArray(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}