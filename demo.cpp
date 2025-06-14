#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> &arr, int n)
{
    int cnt1 = 0;
    int cnt2 = 0;
    int el1;
    int el2;

    for (int i = 0; i < n; i++)
    {
        if (cnt1 == 0 && arr[i] != el2)
        {
            cnt1 = 1;
            el1 = arr[i];
        }
        else if (cnt2 == 0 && arr[i] != el1)
        {
            cnt2 = 1;
            el2 = arr[i];
        }
        else if (arr[i] == el1)
            cnt1++;
        else if (arr[i] == el2)
            cnt2++;
        else
        {
            cnt1--;
            cnt2--;
        }
    }

    vector<int> ans;
    cnt1 = 0;
    cnt2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == el1)
            cnt1++;
        if (arr[i] == el2)
            cnt2++;
    }

    if (cnt1 > n / 3)
        ans.push_back(el1);
    if (cnt2 > n / 3)
        ans.push_back(el2);

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

    vector<int> result = majorityElement(arr, n);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}