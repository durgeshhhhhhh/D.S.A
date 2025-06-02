#include <bits/stdc++.h>
using namespace std;

string twoSum(vector<int> &arr, int n, int target)
{
    sort(arr.begin(), arr.end());

    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        if (arr[left] + arr[right] == target)
        {
            return "yes";
        }
        else if (arr[left] + arr[right] < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    return "NO";
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

    cout <<  twoSum(arr, n, target);
}