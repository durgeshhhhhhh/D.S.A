#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &arr)
{
  for (int i = 1; i <= arr.size(); i++)
  {
    int flag = 0;
    for (int j = 0; j < arr.size(); j++)
    {
      if (arr[j] == i)
      {
        flag = 1;
        break;
      }
    }
    if (flag == 0)
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

  int result = missingNumber(arr);

  cout << result;

  return 0;
}