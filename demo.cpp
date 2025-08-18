#include <bits/stdc++.h>
using namespace std;

bool isValid(vector<int> &arr, int maxAllowedPages, int stu)
{
    int current_stu = 1;
    int pages = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (pages + arr[i] <= maxAllowedPages)
        {
            pages += arr[i];
        }
        else
        {
            current_stu++;
            pages = arr[i];
        }
    }

    if (current_stu <= stu)
        return true;
    else
        return false;
}

int findPages(vector<int> &arr, int m)
{
    int n = arr.size();

    int summ = 0, low = 0;
    for (int i = 0; i < n; i++)
    {
        summ += arr[i];
        low = max(low, arr[i]);
    }

    int high = summ;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (isValid(arr, mid, m))
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

    cout << findPages(arr, m);

    return 0;
}