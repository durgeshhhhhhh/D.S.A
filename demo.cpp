#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &arr, int n)
{
  int s1 = (n * (n + 1)) / 2;

  int s2 = 0;
  for (int i = 0; i < n; i++)
  {
    s2 = s2 + arr[i];
  }

  return s1 - s2;
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

  int result = missingNumber(arr, n);

  cout << result;

  return 0;
}