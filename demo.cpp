#include <bits/stdc++.h>
using namespace std;

void rotateArray(vector<int> &arr, int n, int k)
{
    int temp = arr[0];

    for (int j = 1; j < n; j++)
    {
        arr[j - 1] = arr[j];
    }

    arr[n - 1] = temp;
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