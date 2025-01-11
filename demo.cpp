#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int> &a, vector<int> &b)
{
  set<int> st;

  for (int i = 0; i < a.size(); i++)
  {
    st.insert(a[i]);
  }

  for (int i = 0; i < b.size(); i++)
  {
    st.insert(b[i]);
  }

  vector<int> temp;

  for (auto it : st)
  {
    temp.push_back(it);
  }

  return temp;
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