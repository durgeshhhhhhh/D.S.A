#include <bits/stdc++.h>
using namespace std;

void findUnion(vector<int> &arr1, vector<int> &arr2, int n, int m)
{
    set<int> st;

    for (int i = 0; i < n; i++)
    {
        st.insert(arr1[i]);
    }

    for (int i = 0; i < n; i++)
    {
        st.insert(arr2[i]);
    }

    vector<int> temp;

    for (auto it : st)
    {
        temp.push_back(it);
    }

    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr1(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    int m;
    cin >> m;
    vector<int> arr2(m);

    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    findUnion(arr1, arr2, n, m);

    return 0;
}