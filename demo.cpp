#include <bits/stdc++.h>
using namespace std;

void intersection(vector<int> &arr1, vector<int> &arr2, int n, int m)
{
    vector<int> temp;

    int i = 0;
    int j = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr1[i])
        {
            j++;
        }
        else
        {
            temp.push_back(arr1[i]);
            i++;
            j++;
        }
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

    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    intersection(arr1, arr2, n, m);

    return 0;
}