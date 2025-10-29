#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> heights(n);

    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }

    vector<int> left(n, 0);
    vector<int> right(n, 0);
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && heights[st.top()] >= heights[i])
        {
            st.pop();
        }

        left[i] = st.empty() ? -1 : st.top();

        st.push(i);
    }

    while (!st.empty())
    {
        st.pop();
    }

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && heights[st.top()] >= heights[i])
        {
            st.pop();
        }

        right[i] = st.empty() ? n : st.top();

        st.push(i);
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int height = heights[i];
        int width = right[i] - left[i] - 1;
        ans = max(ans, height * width);
    }

    cout << ans;

    return 0;
}