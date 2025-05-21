#include <bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n)
{
    int maxx = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxx)
            maxx = arr[i];
    }

    int secondLargest = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > secondLargest && arr[i] != maxx)
            secondLargest = arr[i];
    }

    return secondLargest;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << secondLargest(arr, n);
}