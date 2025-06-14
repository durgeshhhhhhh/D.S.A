#include <bits/stdc++.h>
using namespace std;

set<int> majorityElement(vector<int> &arr, int n)
{
    set<int> ans;

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cnt++;
            }
        }
        if (cnt > n / 3)
        {
            ans.insert(arr[i]);
        }
    }
    return ans;
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

    set<int> result = majorityElement(arr, n);

    for (auto it : result)
    {
        cout << it << " ";
    }

    return 0;
}