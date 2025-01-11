#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &arr, int n)
{
  int hash[n + 1] = {0};

  for (int i = 0; i <= n; i++)
  {
    hash[arr[i]] = 1;
  }

  for (int i = 1; i <= n; i++)
  {
    if (hash[i] == 0)
      return i;
  }

  return -1;
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