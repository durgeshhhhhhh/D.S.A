#include <bits/stdc++.h>
using namespace std;

void selection_sort(int n, int arr[])
{
  for (int i = 0; i < n - 1; i++)
  {
    int mini = i;
    for (int j = i; j < n; j++)
    {
      if (arr[j] < arr[mini])
      {
        mini = j;
      }
    }
    int temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;
  }
}

void bubble_sort(int n, int arr[])
{
  for (int i = 0; i < n - 1; i++)
  {
    bool is_swap = false;
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
        is_swap = true;
      }
    }
    if (!is_swap)
    {
      break;
    }
  }
}

void insertion_sort(int n, int arr[])
{
  for (int i = 0; i < n; i++)
  {
    /*int j = i;
    while (j > 0 && arr[j] < arr[j - 1])
    {
      swap(arr[j], arr[j - 1]);
      j--;
    }*/

    for (int j = i; j > 0; j--)
    {
      if (arr[j] < arr[j - 1])
      {
        swap(arr[j], arr[j - 1]);
      }
    }
  }
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

  insertion_sort(n, arr);

  for (int k = 0; k < n; k++)
  {
    cout << arr[k] << " ";
  }

  return 0;
}