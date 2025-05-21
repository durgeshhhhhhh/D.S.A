#include <bits/stdc++.h>
using namespace std;

int sLargest(int arr[], int n)
{
    int largest = arr[0];
    int sLargest = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            sLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > sLargest)
            sLargest = arr[i];
    }

    return sLargest;
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

    cout << sLargest(arr, n);
}