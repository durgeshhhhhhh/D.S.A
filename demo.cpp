#include <bits/stdc++.h>
using namespace std;

int longestConsecutives(vector<int> &arr, int n)
{
    unordered_set<int> st;

    if (n == 0)
        return 0;

    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }

    int longest = 0;
    for (auto it : st)
    {
        cout << it << endl;
        if (st.find(it - 1) == st.end())
        {
            int cnt = 1;
            int x = it;

            while (st.find(x + 1) != st.end())
            {
                x = x + 1;
                cnt = cnt + 1;
            }
            longest = max(longest, cnt);
        }
    }

    return longest;
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

    cout << longestConsecutives(arr, n);
}