#include <bits/stdc++.h>
using namespace std;

void insertionSort(int n, int arr[])
{
  cout << "Stepwise visualization of sorting:" << endl
       << endl;

  for (int i = 0; i < n; i++)
  {
    int j = i;

    while (j > 0 && arr[j - 1] > arr[j])
    {
      // swap(arr[j - 1], arr[j]);

      int temp = arr[j - 1];
      arr[j - 1] = arr[j];
      arr[j] = temp;
      j--;
    }

    for (int i = 0; i < n; i++)
    {
      cout << arr[i] << " ";
    }

    cout << endl;
  }

  cout << endl;
}

int main()
{
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  insertionSort(n, arr);

  cout << "Final Output:" << endl;

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}