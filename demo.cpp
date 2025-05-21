#include <bits/stdc++.h>
using namespace std;

string arraySorted(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
        }
        else
            return "Array is not sorted";
    }

    return "Array is sorted";
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

    cout << arraySorted(arr, n);
}