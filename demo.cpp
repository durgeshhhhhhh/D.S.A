#include <bits/stdc++.h>
using namespace std;

void maximumSubarraySum(vector<int> &arr, int n)
{
    int start;
    int ansStart;
    int ansEnd;
    int i = 0;
    int maxx = INT_MIN;
    int summ = 0;
    while (i < n)
    {
        if (summ == 0)
        {
            start = i;
        }

        summ = summ + arr[i];

        if (summ > maxx)
        {
            maxx = summ;
            ansStart = start;
            ansEnd = i;
        }

        if (summ < 0)
        {
            summ = 0;
        }

        i++;
    }

    cout <<  maxx << endl;
    cout << "Indices : " << ansStart << " , " << ansEnd;

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

    maximumSubarraySum(arr, n);

    return 0;
}