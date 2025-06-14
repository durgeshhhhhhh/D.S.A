#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> &arr, int n)
{
    vector<int> ans;
    map<int, int> mpp;
    int minimum = (n / 3) + 1;

    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;

        if (mpp[arr[i]] == minimum)
        {
            ans.push_back(arr[i]);
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

    vector<int> result = majorityElement(arr, n);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}