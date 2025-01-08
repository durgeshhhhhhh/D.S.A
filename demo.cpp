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

  int smallest = arr[0];
  int secondSmallest = INT_MAX;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] < smallest)
    {
      secondSmallest = smallest;
      smallest = arr[i];
    }
    else if (arr[i] > smallest && arr[i] < secondSmallest)
    {
      secondSmallest = arr[i];
    }
  }

  cout << "Second Largest element in an array is " << secondSmallest;

  return 0;
}