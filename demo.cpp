#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int> &arr, int n)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        bool leader = true;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                leader = false;
                break;
            }
        }

        if (leader)
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

    vector<int> result = leaders(arr, n);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}