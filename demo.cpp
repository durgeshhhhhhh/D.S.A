#include <bits/stdc++.h>
using namespace std;

void findUnion(vector<int> &arr1, vector<int> &arr2, int n, int m)
{
    int i = 0;
    int j = 0;
    vector<int> unionArr;

    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            if (unionArr.size() == 0 || unionArr.back() != arr1[i])
            {
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (unionArr.size() == 0 || unionArr.back() != arr2[j])
            {
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (i < n)
    {
        if (unionArr.size() == 0 || unionArr.back() != arr1[i])
        {
            unionArr.push_back(arr1[i]);
        }
        i++;
    }

    while (j < m)
    {
        if (unionArr.size() == 0 || unionArr.back() != arr2[j])
        {
            unionArr.push_back(arr2[j]);
        }
        j++;
    }

    for (int i = 0; i < unionArr.size(); i++)
    {
        cout << unionArr[i] << " ";
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