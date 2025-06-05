#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int> &arr, int n)
{
    vector<int> ans(n, 0);

    int positiveIndx = 0;
    int negativeIndx = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            ans[positiveIndx] = arr[i];
            positiveIndx += 2;
        }
        else
        {
            ans[negativeIndx] = arr[i];
            negativeIndx += 2;
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

    vector<int> result = rearrangeArray(arr, n);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}