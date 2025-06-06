#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &arr)
{
    next_permutation(arr.begin(), arr.end());
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

    nextPermutation(arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}