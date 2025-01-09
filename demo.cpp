#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &arr, int n, int k)
{
  vector<int> temp;

    k = k % arr.size();

  for (int i = 0; i < k; i++)
  {
    temp.push_back(arr[i]);
  }

  for (int j = k; j < n; j++)
  {
    arr[j - k] = arr[j];
  }

  for (int i = n - k; i < arr.size(); i++)
  {
    arr[i] = temp[i - (n - k)];
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

  int d;
  cin >> d;

  rotate(arr, n, d);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}