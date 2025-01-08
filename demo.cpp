#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> arr(n);

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int max = arr[0];

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > max)
      max = arr[i];
  }

  int secondMax = arr[0];

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > secondMax && arr[i] != max)
      secondMax = arr[i];
  }

  cout << "Second Largest element in an array is " << secondMax;

  return 0;
}