#include <bits/stdc++.h>
using namespace std;

void twoSum(vector<int> &arr, int n, int target)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << i << " , " << j << endl;
                cnt++;
            }
        }
    }
    if (cnt == 0)
    {
        cout << "-1" << endl;
    }
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

    twoSum(arr, n, target);
}