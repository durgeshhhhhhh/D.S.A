#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &arr, int n, int target)
{
    map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        int rem = target - arr[i];
        if (mpp.find(rem) != mpp.end())
        {
            return {mpp[rem], i};
        }

        mpp[arr[i]] = i;
    }

    return {-1, -1};
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

    int target;
    cin >> target;

    vector<int> result = twoSum(arr, n, target);

    if (result[0] != -1)
    {
        cout << "Indices: " << result[0] << " , " << result[1];
    }
    else
        cout << "-1";
}