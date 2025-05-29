#include <bits/stdc++.h>
using namespace std;

void intersection(vector<int> &arr1, vector<int> &arr2, int n, int m)
{
    vector<int> temp;
    int visitor[m] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j] && visitor[j] == 0)
            {
                temp.push_back(arr1[i]);
                visitor[j] = 1;
                break;
            }

            if (arr2[j] > arr1[i])
                break;
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

    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    intersection(arr1, arr2, n, m);

    return 0;
}