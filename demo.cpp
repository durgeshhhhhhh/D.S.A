#include <bits/stdc++.h>
using namespace std;

int partIndex(vector<int> &arr, int low, int high)
{
  int pivot = arr[high];
  int i = low;
  int j = high;

  while (i < j)
  {
    while (arr[j] >= pivot && j >= low + 1)
    {
      j--;
    }

    while (arr[i] < pivot && i <= high - 1)
    {
      i++;
    }

    if (i < j)
      swap(arr[i], arr[j]);
  }

  swap(arr[i], arr[high]);
  return i;
}

void quickSort(vector<int> &arr, int low, int high)
{
  if (low < high)
  {
    int partition = partIndex(arr, low, high);

    quickSort(arr, low, partition - 1);
    quickSort(arr, partition + 1, high);
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

  quickSort(arr, 0, n - 1);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}