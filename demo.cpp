#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &arr, int n)
{
    int j;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != arr[j])
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;                                              
            j++;
        }
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

    moveZeroes(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}