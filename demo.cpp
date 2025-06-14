#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> &arr, int n)
{
    unordered_map<int, int> mpp;
    vector<int> result;

    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    for (auto it : mpp)
    {
        if (it.second > n / 3)
            result.push_back(it.first);
    }

    return result;
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