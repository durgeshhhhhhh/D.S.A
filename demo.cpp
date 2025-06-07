#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int> &arr, int n)
{
    vector<int> ans;

    int maxx = INT_MIN;

    int i = n - 1;

    while (i >= 0)
    {

        if (arr[i] > maxx)
        {
            maxx = arr[i];
            ans.push_back(arr[i]);
        }

        i--;
    }

    reverse(ans.begin(), ans.end());

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

    vector<int> result = leaders(arr, n);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}