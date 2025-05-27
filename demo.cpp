#include <bits/stdc++.h>
using namespace std;

void rotateArray(vector<int> &arr, int n, int k)
{
    k = k % n;

    vector<int> temp;

    for (int i = n - k; i < n; i++)
    {
        temp.push_back(arr[i]);
    }

    for (int i = n - 1; i >= k; i--)
    {
        arr[i] = arr[i - k];
    }

    for (int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
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

    int k;
    cin >> k;

    rotateArray(arr, n, k);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}