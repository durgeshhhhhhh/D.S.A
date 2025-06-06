#include <bits/stdc++.h>
using namespace std;

void rearrangeArray(vector<int> &arr, int n)
{
    vector<int> positive;
    vector<int> negative;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            positive.push_back(arr[i]);
        }
        else
        {
            negative.push_back(arr[i]);
        }
    }

    cout << negative.size() << endl;

    if (positive.size() > negative.size())
    {
        for (int i = 0; i < negative.size(); i++)
        {
            arr[2 * i] = positive[i];
            arr[2 * i + 1] = negative[i];
        }

        int index = negative.size() * 2;
        for (int i = negative.size(); i < positive.size(); i++)
        {
            arr[index] = positive[i];
            index++;
        }
    }
    else
    {
        for (int i = 0; i < positive.size(); i++)
        {
            arr[2 * i] = positive[i];
            arr[2 * i + 1] = negative[i];
        }

        int index = positive.size() * 2;
        for (int i = positive.size(); i < negative.size(); i++)
        {
            arr[index] = negative[i];
            index++;
        }
    }
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

    rearrangeArray(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}