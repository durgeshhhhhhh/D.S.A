#include <bits/stdc++.h>
using namespace std;

void print(int n, int i, int r,  int arr[])
{
  if (i >= r)
    return;

  swap(arr[i], arr[r]);

  print(n, i + 1, r-1, arr);
}
int main()
{
  int n;
  cin >> n;
  int arr[n];
  int r = n-1;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  
  print(n, 0, r,  arr);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}