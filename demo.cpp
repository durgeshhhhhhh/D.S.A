#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int> &a, vector<int> &b)
{
  vector<int> unionArr;

  int i = 0;
  int j = 0;

  while (i < a.size() && j < b.size())
  {
    if (a[i] <= b[j])
    {
      if (unionArr.size() == 0 || unionArr.back() != a[i])
      {
        unionArr.push_back(a[i]);
      }
      i++;
    }
    else
    {
      if (unionArr.size() == 0 || unionArr.back() != b[j])
      {
        unionArr.push_back(b[j]);
      }
      j++;
    }
  }

  while (i < a.size())
  {
    if (unionArr.size() == 0 || unionArr.back() != a[i])
      {
        unionArr.push_back(a[i]);
      }
      i++;
  }

  while (j < b.size())
  {
    if (unionArr.size() == 0 || unionArr.back() != b[j])
      {
        unionArr.push_back(b[j]);
      }
      j++;
  }

  return unionArr;

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

  cout << "::::: Union of two array :::::" << endl;

  for (int i = 0; i < result.size(); i++)
  {
    cout << result[i] << " ";
  }

  return 0;
}