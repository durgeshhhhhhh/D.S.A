#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &arr, int n)
{
    int index = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            index = i;      
            break;
        }
    }

    if (index == -1)
    {
        int i = 0;
        int j = n - 1;

        while (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    else
    {
        for (int i = n - 1; i > index; i--)
        {
            if (arr[i] > arr[index])
            {
                int temp = arr[i];
                arr[i] = arr[index];
                arr[index] = temp;
                break;
            }
        }

        for (int i = index + 1; i > n; i++)
        {
            int j = n - 1;

            while (i < j)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
                j--;
            }
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

    nextPermutation(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}