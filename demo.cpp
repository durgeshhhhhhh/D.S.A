#include <bits/stdc++.h>
using namespace std;

void duplicate(vector<int> &arr, int n)
{
    set<int> st;

    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }

    cout << "::::: Array Without Duplicates :::::" << endl;
    cout << "             ";
    cout << "[ ";
    int index = 0;
    for (auto it : st)
    {
        cout << it << " ";
        index++;
    }
    cout << "]";

    cout << endl
         << endl
         << endl
         << endl;

    cout << "Array size after removing duplicates: " << index << endl;
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

    duplicate(arr, n);

    return 0;
}