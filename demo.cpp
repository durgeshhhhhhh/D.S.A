#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int x;
    cin >> x;

    cout << upper_bound(nums.begin(), nums.end(),x) - nums.begin();

    return 0;
}