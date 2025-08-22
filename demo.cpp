#include <bits/stdc++.h>
using namespace std;

double medianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    int n1 = nums1.size();
    int n2 = nums2.size();

    int i = 0;
    int j = 0;

    vector<int> arr;

    while (i < n1 && j < n2)
    {
        if (nums1[i] <= nums2[j])
        {
            arr.push_back(nums1[i]);
            i++;
        }
        else
        {
            arr.push_back(nums2[j]);
            j++;
        }
    }

    while (i < n1)
    {
        arr.push_back(nums1[i]);
        i++;
    }

    while (j < n2)
    {
        arr.push_back(nums2[j]);
        j++;
    }

    int n = arr.size();

    if (n % 2 == 0)
    {
        return (arr[n / 2] + arr[n / 2 - 1]) / 2.0;
    }
    else
    {
        return arr[n / 2];
    }
}

int main()
{
    int n1;
    cin >> n1;

    vector<int> nums1(n1);

    for (int i = 0; i < n1; i++)
    {
        cin >> nums1[i];
    }

    int n2;
    cin >> n2;

    vector<int> nums2(n2);

    for (int i = 0; i < n2; i++)
    {
        cin >> nums2[i];
    }

    cout << medianSortedArrays(nums1, nums2);

    return 0;
}