#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int> &a, vector<int> &b)
{
  int visit[b.size()] = {0};
  vector<int> intst;

  for (int i = 0; i < a.size(); i++)
  {
    for (int j = 0; j < b.size(); j++)
    {
      if (a[i] == b[j] && visit[j] == 0)
      {
        intst.push_back(a[i]);
        visit[j] = 1;
        break;
      }

      if (b[j] > a[i])
        break;
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

  cout << "::::: Union of two array :::::" << endl;

  for (int i = 0; i < result.size(); i++)
  {
    cout << result[i] << " ";
  }

  return 0;
}