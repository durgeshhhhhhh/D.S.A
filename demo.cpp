#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &arr, int n)
{
  vector<int> temp;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] != 0)
    {
      temp.push_back(arr[i]);
    }
  }

  for (int i = 0; i < temp.size(); i++)
  {
    arr[i] = temp[i];
  }

  for (int i = temp.size(); i < n; i++)
  {
    arr[i] = 0;
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

  moveZeroes(arr, n);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}