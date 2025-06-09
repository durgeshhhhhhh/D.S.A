#include <bits/stdc++.h>
using namespace std;

int longestConsecutives(vector<int> &arr, int n)
{
    sort(arr.begin(), arr.end());

    int longest = 1;
    int currentCnt = 1;

    for (int i = 1; i < n; i++)
    {

        if (arr[i] != arr[i - 1])
        {
            if (arr[i] == arr[i - 1] + 1)
                currentCnt++;
            else
                currentCnt = 1;
        }

        longest = max(longest, currentCnt);
    }

    return longest;
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

    cout << longestConsecutives(arr, n);
}