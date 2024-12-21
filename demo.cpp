#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int hash[13] = {0};

  for (int i = 0; i < n; i++)
  {
    hash[arr[i]]++;
  }

  int maxfreq = 0, maxelement, minfreq = INT_MAX, minelement;

  for (int i = 0; i < 13; i++)
  {
    if (hash[i] >= maxfreq)
    {
      maxfreq = hash[i];
      maxelement = i;
    }

    if (hash[i] > 0 && hash[i] <= minfreq)
    {
        minfreq = hash[i];
        minelement = i;
    }
  }

  cout << "Maximum Frequency Element is " << maxelement << endl;
  cout << "Maximum Frequency is " << maxfreq << endl;

  cout << "Minimum Frequency Element is " << minelement << endl;
  cout << "Minimum Frequency is " << minfreq << endl;

  int q;
  cin >> q;
  while (q--)
  {
    int number;
    cin >> number;

    cout << hash[number] << endl;
  }
  return 0;
}