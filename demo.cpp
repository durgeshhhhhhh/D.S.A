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

  bool is_sorted;

  for (int i = 1; i < n; i++)
  {
    if (arr[i] > arr[i - 1])
    {
      is_sorted = true;
    }
    else
    {
      is_sorted = false;
      break;
    }
  }

  if (!is_sorted)
  {
    cout << "Array is not Sorted";
  }
  else
  {
    cout << "Array is sorted";
  }

  return 0;
}