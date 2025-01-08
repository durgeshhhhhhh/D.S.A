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

  int largest = arr[0];
  int secondLargest = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > largest)
    {
      secondLargest = largest;
      largest = arr[i];
    }
    else if (arr[i] < largest && arr[i] > secondLargest)
    {
      secondLargest = arr[i];
    }
  }

  cout << "Second Largest element in an array is " << secondLargest;

  return 0;
}