#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int> &a, vector<int> &b)
{
  vector<int> intst;
  int i = 0;
  int j = 0;

  while (i < a.size() && j < b.size())
  {
    if (a[i] < b[j])
    {
      i++;
    }
    else if (a[i] > b[j])
    {
      j++;
    }
    else
    {
      intst.push_back(a[i]);
      i++;
      j++;
    }
  }
  return intst;
}

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int k;
  cin >> k;
  vector<int> b(k);

  for (int i = 0; i < k; i++)
  {
    cin >> b[i];
  }

  vector<int> result = findUnion(a, b);

  cout << "::::: Intersection of two array :::::" << endl;

  for (int i = 0; i < result.size(); i++)
  {
    cout << result[i] << " ";
  }

  return 0;
}